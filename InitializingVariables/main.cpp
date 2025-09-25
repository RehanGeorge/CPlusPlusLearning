#include <iostream>

using namespace std;

int main() {
    cout << "Enter the length and width of the room separated by a space: ";
    
    double length {0};
    double width {0};
    
    cin >> length >> width;
    
    double area {length * width};
    
    cout << "The area of the room is " << area << endl;
    
    return 0;
}