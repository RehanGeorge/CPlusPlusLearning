#include <iostream>
#include <vector>

using namespace std;

// Function prototypes
void print_numbers(const vector<int> &numbers);
void add_number(vector<int> &numbers);
void mean_number(const vector<int> &numbers);
void smallest_number(const vector<int> &numbers);
void largest_number(const vector<int> &numbers);

int main()
{
    char choice {};
    bool live {true};
    vector<int> numbers {};
    do {
        cout << "Enter a choice from the below menu:" << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;
        switch (choice) {
            case 'p':
            case 'P':
                print_numbers(numbers);
                break;
            case 'a':
            case 'A':
                add_number(numbers);
                break;
            case 'm':
            case 'M':
                mean_number(numbers);
                break;
            case 's':
            case 'S':
                smallest_number(numbers);
                break;
            case 'l':
            case 'L':
                largest_number(numbers);
                break;
            case 'q':
            case 'Q':
                cout << "Goodbye" << endl;
                live = false;
        }
    } while (live);
}

void print_numbers(const vector<int> &numbers) {
    if (numbers.size() == 0) {
        cout << "[] - the list is empty" << endl;
    } else {
        cout << "[ ";
    for (auto number: numbers) {
        cout << number << " ";
    }
        cout << "]";
    }
};

void add_number(vector<int> &numbers) {
    int newNumber {0};
    cout << "Which number do you want to add: ";
    cin >> newNumber;
    numbers.push_back(newNumber);
    cout << newNumber << " added" << endl;
};

void mean_number(const vector<int> &numbers) {
    if (numbers.size() == 0) {
        cout << "Unable to calculate the mean - no data" << endl;
    } else {
        double mean {0};
        for (auto number: numbers) {
            mean += number;
        }
        cout << static_cast<double>(mean / numbers.size()) << endl;
    }    
}

void smallest_number(const vector<int> &numbers) {
    if (numbers.size() == 0) {
        cout << "Unable to determine the smallest number - list is empty" << endl;
    } else {
        int smallest {numbers.at(0)};
        for (auto number: numbers) {
            if (number < smallest) {
                smallest = number;
            }
        }
        cout << "The smallest number is " << smallest << endl;
    }    
};

void largest_number(const vector<int> &numbers) {
    if (numbers.size() == 0) {
        cout << "Unable to determine the largest number - list is empty" << endl;
    } else {
        int largest {numbers.at(0)};
        for (auto number: numbers) {
            if (number > largest) {
                largest = number;
            }
        }
        cout << "The largest number is " << largest << endl;
    }    
};