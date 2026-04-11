#include <iostream>
#include <string>
#include "Account.hpp"

using namespace std;

int main() {
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.deposit(1000.0);
    frank_account.withdraw(500.0);
    cout << frank_account.check() << endl;
    
    Account jim_account;
    
    return 0;
};
