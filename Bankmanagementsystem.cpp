#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Class to represent a bank account
class BankAccount {
private:
    string accountNumber;
    string customerName;
    double balance;

public:
    // Constructor
    BankAccount(string accNumber, string custName, double initialBalance) {
        accountNumber = accNumber;
        customerName = custName;
        balance = initialBalance;
    }

    // Method to deposit money
    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of $" << amount << " successful.\n";
    }

    // Method to withdraw money
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful.\n";
        } else {
            cout << "Insufficient funds.\n";
        }
    }

    // Method to get current balance
    double getBalance() const {
        return balance;
    }

    // Method to get account number
    string getAccountNumber() const {
        return accountNumber;
    }

    // Method to display account information
    void display() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Balance: $" << balance << endl;
    }
};

// Function to find an account by its number
BankAccount* findAccount(vector<BankAccount>& accounts, const string& accNumber) {
    for (auto& acc : accounts) {
        if (acc.getAccountNumber() == accNumber) {
            return &acc;
        }
    }
    return nullptr;
}

// Function to demonstrate bank operations
void bankOperations() {
    vector<BankAccount> accounts;

    // Example: Creating accounts
    BankAccount acc1("1001", "John Doe", 1000.0);
    BankAccount acc2("1002", "Jane Smith", 500.0);

    accounts.push_back(acc1);
    accounts.push_back(acc2);

    int choice;
    string accNumber;
    double amount;

    do {
        cout << "\nBank Management System Menu\n";
        cout << "1. Display All Accounts\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nAll Accounts:\n";
                for (const auto& acc : accounts) {
                    acc.display();
                    cout << endl;
                }
                break;
            case 2:
                cout << "\nEnter Account Number: ";
                cin >> accNumber;
                cout << "Enter Amount to Deposit: $";
                cin >> amount;

                if (BankAccount* acc = findAccount(accounts, accNumber)) {
                    acc->deposit(amount);
                } else {
                    cout << "Account not found.\n";
                }
                break;
            case 3:
                cout << "\nEnter Account Number: ";
                cin >> accNumber;
                cout << "Enter Amount to Withdraw: $";
                cin >> amount;

                if (BankAccount* acc = findAccount(accounts, accNumber)) {
                    acc->withdraw(amount);
                } else {
                    cout << "Account not found.\n";
                }
                break;
            case 4:
                cout << "\nExiting...\n";
                break;
            default:
                cout << "\nInvalid choice. Please try again.\n";
        }
    } while (choice != 4);
}

// Main function
int main() {
    // Calling bank operations function
    bankOperations();

    return 0;
}
