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
    
    // Create int pointer
    int *int_ptr {nullptr};
    int_ptr = new int;
    
    cout << int_ptr << endl;
    cout << &int_ptr << endl;
    
    delete int_ptr;
    
    // Create double pointer
    size_t size {0};
    double *temp_ptr {nullptr};
    
    cout << "How many temps ";
    cin >> size;
    
    temp_ptr = new double[size];
    
    cout << temp_ptr << endl;
    
    delete [] temp_ptr;
}
