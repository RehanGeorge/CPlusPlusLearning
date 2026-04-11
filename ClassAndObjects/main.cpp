#include <iostream>
#include <string>
#include "Account.hpp"

using namespace std;

class Player
{
private:
    std::string name;
    int health;
    int xp;
public:
    void set_name(std::string name_val) {
        name = name_val;
    }
    // Overloaded Constructors
    Player() {
        cout << "No args constructor called" << endl;
    }
    Player(std::string name) {
        cout << "String arg constructor called" << endl;
    }
    Player(std::string name, int health, int xp) {
        cout << "Three args constructor called" << endl;
    }
    ~Player() {
        cout << "Destructor called for " << name << endl;
    }
}

int main() {
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.deposit(1000.0);
    frank_account.withdraw(500.0);
    cout << frank_account.check() << endl;
    
    Account jim_account;
    
    return 0;
};
