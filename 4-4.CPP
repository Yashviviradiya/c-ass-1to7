#include<iostream.h>
#include<conio.h>
class BankAccount {
private:
    char accountHolderName;
    int accountNumber;
    double balance;
    char accountType; // New member for account type

public:
    // Constructor
    BankAccount() : accountHolderName(""), accountNumber(0), balance(0.0), accountType("") {}

    // Function to assign values
    void assignValueInitialValue(char name, int number, double initialBalance,char type) {
	accountHolderName = name;
	accountNumber = number;
	balance = initialBalance;
	accountType = type;
    }

    // Function to deposit money
    void deposit(double amount) {
	if (amount > 0) {
	    balance += amount;
	    cout << "Deposited: $" << amount << endl;
	} else {
	    cout << "Deposit amount must be positive!" << endl;
	}
    }

    // Function to withdraw money
    void withdraw(double amount) {
	if (amount > 0 && amount <= balance) {
	    balance -= amount;
	    cout << "Withdrawn: $" << amount << endl;
	} else {
	    cout << "Invalid withdrawal amount!" << endl;
	}
    }

    // Function to display account details
    void displayDetails() const {
        cout << "Account Holder: " << accountHolderName
             << ", Account Number: " << accountNumber
             << ", Balance: $" << balance
             << ", Account Type: " << accountType << endl;
    }

    // Getter for account number
    int getAccountNumber() const {
        return accountNumber;
    }
};

int main() {
    const int MAX_ACCOUNTS = 10;
    BankAccount accounts[MAX_ACCOUNTS];

    // Input details for 10 bank accounts
    for (int i = 0; i < MAX_ACCOUNTS; ++i) {
	char name, accountType;
        int number;
        double initialBalance;

        cout << "Entering details for account " << (i + 1) << ":\n";
        cout << "Enter account holder name: ";
        getline(cin, name);
        cout << "Enter account number: ";
        cin >> number;
        cout << "Enter initial balance: ";
        cin >> initialBalance;
        cin.ignore();  // Ignore newline character left in the input buffer
        cout << "Enter account type (Savings/Checking): ";
        getline(cin, accountType);

        accounts[i].assignValueInitialValue(name, number, initialBalance, accountType);
        cout << endl;
    }

    // Display details for all accounts
    cout << "\nAccount Details:\n";
    for (int i = 0; i < MAX_ACCOUNTS; ++i) {
        accounts[i].displayDetails();
    }

    // Example operations: deposit and withdraw
    for (int i = 0; i < MAX_ACCOUNTS; ++i) {
        double depositAmount, withdrawAmount;

        cout << "\nFor account " << accounts[i].getAccountNumber() << ":\n";
        
        cout << "Enter amount to deposit: ";
        cin >> depositAmount;
        accounts[i].deposit(depositAmount);

        cout << "Enter amount to withdraw: ";
        cin >> withdrawAmount;
        accounts[i].withdraw(withdrawAmount);

        cout << endl;
    }

    // Display updated account details
    cout << "\nUpdated Account Details:\n";
    for (int i = 0; i < MAX_ACCOUNTS; ++i) {
        accounts[i].displayDetails();
    }

    return 0;
}
