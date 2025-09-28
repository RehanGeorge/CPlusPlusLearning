#include <iostream>

using namespace std;

int main()
{
	int num1 {12};
    int num2 {12};
    
    cout << (num1 == num2) << endl;
    
    // Will display true/false for booleans
    cout << boolalpha;
    cout << (num1 == num2) << endl;
    
    // Will display 0/1 for booleans
    cout << noboolalpha;
    cout << (num1 == num2) << endl;
}
