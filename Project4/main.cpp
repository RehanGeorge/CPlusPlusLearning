#include <iostream>

using namespace std;

int main()
{
	cout << "Enter an integer representing the number of cents: ";
    
    // Assume the number of cents is greater than or equal to zero
    int num_of_cents {0};
    cin >> num_of_cents;
    
    // 1 dollar = 100 cents; 1 quarter = 25 cents; 1 dime = 10 cents; 1 nickel = 5 cents and 1 penny = 1 cent;
    const int dollarValue {100};
    const int quarterValue {25};
    const int dimeValue {10};
    const int nickelValue{5};
    const int pennyValue{1};
    
    int dollar{}, quarter{}, dime{}, nickel{}, penny{};
    dollar = num_of_cents / dollarValue;
    num_of_cents %= dollarValue;
    
    quarter = num_of_cents / quarterValue;
    num_of_cents %= quarterValue;
    
    dime = num_of_cents / dimeValue;
    num_of_cents %= dimeValue;
    
    nickel = num_of_cents / nickelValue;
    num_of_cents %= nickelValue;
    
    penny = num_of_cents / pennyValue;
    
    cout << "Your change is:" << endl;
    
    cout << "dollars: " << dollar << "\nquarters: " << quarter << "\ndimes: " << dime << endl;
    cout << "nickels: " << nickel << "\npennies: " << penny << endl;
}
