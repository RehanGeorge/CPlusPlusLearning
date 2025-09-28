#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
//	int number {0};
//    number++;
//    
//    printf("%d\n", number);
//    
//    if (number > 0) printf("The number is %d", number);

    int total {};
    int num1{}, num2{}, num3{};
    const int count{3};
    
    cout << "Enter 3 integers separated by spaces: ";
    cin >> num1 >> num2 >> num3;
    
    total = num1 + num2 + num3;
    
    double average{0.0};
    average = static_cast<double>(total) / count;
    
    cout << "The 3 numbers were: " << num1 << "," << num2 << "," << num3 << endl;
    cout << "The sum of the numbers is: " << total << endl;
    cout << "The average is: " << average << endl;
}
