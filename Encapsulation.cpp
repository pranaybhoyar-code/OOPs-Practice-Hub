#include <iostream>
using namespace std;

class BankAccount {

private:
    double balance;

public:

    void setBalance(double balance) {
        if(balance >= 0)
            this->balance = balance;
    }

    double getBalance() {
        return balance;
    }

    void deposit(double amount) {
        if(amount > 0)
            balance += amount;
    }
};

int main() {

    BankAccount account;

    account.setBalance(1000);

    account.deposit(500);

    cout << account.getBalance();

    return 0;
}