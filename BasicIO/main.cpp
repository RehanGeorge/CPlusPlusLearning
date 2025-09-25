#include <iostream>

using namespace std;

int main() {
    
    cout << "Hello world!" << endl;
    
    cout << "Hello" << " world!" << "\n";
    
    cout << "This is on a new line" << endl;
    
    int num1;
    int num2;
    double num3;
    
//    cout << "Enter an integer: ";
//    cin >> num1;
//    
//    cout << "Enter a second integer: ";
//    cin >> num2;
//    
//    cout << "You entered: " << num1 << " and " << num2 << endl;

    cout << "Enter 2 integers and a double separated by spaces: ";
    cin >> num1 >> num2 >> num3;
    cout << "You entered: " << num1 << " and " << num2 << " and " << num3 << endl;
}