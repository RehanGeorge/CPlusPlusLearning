#include <iostream>

using namespace std;

int main()
{
    int num1{};
    
    cout << num1 << endl;
    cout << &num1 << endl;
    
    long long *p;
    cout << p << endl;
    cout << &p << endl;
    cout << sizeof(p) << endl;
    
    p = nullptr;
    cout << p << endl;
}
