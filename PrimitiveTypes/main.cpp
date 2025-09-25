#include <iostream>
#include <climits>

using namespace std;

int main() {
    
    // Char type
    char middle_letter{'e'};
    cout << "The middle letter in this case is: " << middle_letter;
    
    // Integer types
    unsigned short int exam_score {55};
    cout << "My exam score was: " << exam_score << endl;
    
    int countries_represented {65};
    cout << "There were " << countries_represented << " countries represented in my meeting\n";
    
    long long people_on_earth {8'000'000'000};
    cout << "There are about " << people_on_earth << " people on earth" << endl;
    
    // Floating point types
    float car_payment {401.23};
    
    double pi {3.14159};
    
    long double large_amount {2.7e120};
    
    // Boolean type
    bool game_over {false};
    
    // Overflow example
    short value1 {30000};
    short value2 {1000};
    short product {value1 * value2};
    
    cout << "The sum of " << value1 << " and " << value2 << " is " << product << endl;
    
    // Size of operator
    cout << "char: " << sizeof(char) << endl;
}