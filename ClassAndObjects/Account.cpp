#include "Account.hpp"

double Account::check() {
    return balance;
}

std::string Account::get_name() {
    std::cout << "The account holder is " << name << std::endl;
    return name;
};

void Account::set_name(std::string accountName) {
    name = accountName;
}