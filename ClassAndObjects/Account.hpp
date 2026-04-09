#ifndef _ACCOUNT_H
#define _ACCOUNT_H

#include <iostream>
#include <string>

class Account
{
private:
    // attributes
    std::string name {"Account"};
    double balance {0.0};

public:    
    // methods
    bool deposit(double bal) {balance += bal; std::cout << "In deposit" << std::endl; return true; }
    bool withdraw(double bal) {balance -= bal; std::cout << "In withdraw" << std::endl; return true; }
    double check();
    
    std::string get_name();
    void set_name(std::string accountName);
};

#endif // _ACCOUNT_H
