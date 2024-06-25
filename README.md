Bank Management System
This is a simple Bank Management System implemented in C++. It allows users to perform basic banking operations such as displaying account information, depositing money, and withdrawing money.

Features
Create and manage multiple bank accounts.
Display account details including account number, customer name, and balance.
Deposit money into an account.
Withdraw money from an account.
Getting Started
Prerequisites
To compile and run this project, you will need:

A C++ compiler (e.g., GCC, Clang, or MSVC)
A text editor or an Integrated Development Environment (IDE) (e.g., Visual Studio Code, CLion, or Code::Blocks)
Installation
Clone the repository:

bash
Copy code
git clone https://github.com/your_username/bank-management-system.git
cd bank-management-system
Compile the program:

bash
Copy code
g++ -o bank_management_system main.cpp
Run the program:

bash
Copy code
./bank_management_system
Usage
Once you run the program, you will be presented with a menu that allows you to perform the following operations:

Display All Accounts: View details of all bank accounts.
Deposit Money: Deposit a specified amount into an account.
Withdraw Money: Withdraw a specified amount from an account.
Exit: Exit the application.
Example Interaction
plaintext
Copy code
Bank Management System Menu
1. Display All Accounts
2. Deposit Money
3. Withdraw Money
4. Exit
Enter your choice: 1

All Accounts:
Account Number: 1001
Customer Name: John Doe
Balance: $1000

Account Number: 1002
Customer Name: Jane Smith
Balance: $500

Bank Management System Menu
1. Display All Accounts
2. Deposit Money
3. Withdraw Money
4. Exit
Enter your choice: 2

Enter Account Number: 1001
Enter Amount to Deposit: $200
Deposit of $200 successful.

Bank Management System Menu
1. Display All Accounts
2. Deposit Money
3. Withdraw Money
4. Exit
Enter your choice: 3

Enter Account Number: 1002
Enter Amount to Withdraw: $100
Withdrawal of $100 successful.

Bank Management System Menu
1. Display All Accounts
2. Deposit Money
3. Withdraw Money
4. Exit
Enter your choice: 4

Exiting...
Code Structure
main.cpp: The main source file that contains the implementation of the bank management system.
Key Classes and Functions
BankAccount Class:

BankAccount(string accNumber, string custName, double initialBalance): Constructor to initialize a new account.
void deposit(double amount): Method to deposit money into the account.
void withdraw(double amount): Method to withdraw money from the account.
double getBalance() const: Method to get the current balance of the account.
string getAccountNumber() const: Method to get the account number.
void display() const: Method to display the account details.
Helper Functions:

BankAccount* findAccount(vector<BankAccount>& accounts, const string& accNumber): Function to find an account by its number.
void bankOperations(): Function to handle the main operations of the bank management system.
Contributing
Contributions are welcome! If you have any suggestions or improvements, please create a pull request or open an issue.
