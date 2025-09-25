#include <iostream>

using namespace std;

int age {18}; // This is a global variable

int main() {
        
    int age {16}; // Local variable is used first
    
    cout << age << endl;
    
    return 0;
}