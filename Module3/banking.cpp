#include <iostream>
using namespace std;

int balance;

class AccountInfo {
public:
    int ac_num;
    string ac_hold;

    void getAccountInfo() {
        cout << "Enter account number: ";
        cin >> ac_num;
        cout << "Enter account holder name: ";
        cin >> ac_hold;
    }
};

class BankAccount : public AccountInfo {
public:
    string ac_type;

    void openAccount() {
        cout << "Enter account type (Saving/Current): ";
        cin >> ac_type;
        cout << "Enter initial balance: ";
        cin >> balance;
    }

    void showAccountDetails() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Number   : " << ac_num << "\n";
        cout << "Account Holder   : " << ac_hold << "\n";
        cout << "Account Type     : " << ac_type << "\n";
        cout << "Current Balance  : Rs. " << balance << "\n";
    }
};

class Transaction : public BankAccount {
public:
    void deposit() {
        int amount;
        cout << "\nEnter amount to deposit: ";
        cin >> amount;

        if (amount > 0) {
            balance += amount;
            cout << "Deposited: Rs." << amount << "\n";
        } else {
            cout << "Invalid deposit amount!" << "\n";
        }
    }

    void withdraw() {
        int amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: Rs." << amount << "\n";
        } else {
            cout << "Invalid withdrawal amount!" << "\n";
        }
    }
};

main() {
    Transaction t;

    t.getAccountInfo();
    t.openAccount();

    t.deposit();  
    t.withdraw();  
    t.showAccountDetails();

}

