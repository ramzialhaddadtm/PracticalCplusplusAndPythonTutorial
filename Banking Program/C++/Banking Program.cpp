// Banking Program.cpp : Defines the entry point for the console application.
// CSV file syntax: bankAccountNum, bankAccountName, bankAccountBalance 

#include "stdafx.h"

using namespace std;

// Define prototype functions

int searchVector();
int searchArray();
int viewAccount();

int main()
{
menu:

	// Define some variables
	bool isExit = false;
	// Marker
	int choice = 0;
	int confirm = 0;

	system("cls");
	cout << "What would you like to do?\n\n";
	cout << "1. View Account" << endl;
	cout << "2. Send or Transfer" << endl;
	cout << "3. Deposit" << endl;
	cout << "4. Withdraw" << endl;
	cout << "5. Open a New Account" << endl;

	cin >> choice;

	switch (choice) {
	case 1:
		// View account
		cout << "You have chosen to view your account!" << endl;
		system("pause"); //sleep
		cout << "Please type 1 to confirm your action ";

		cin >> confirm;
		cout << endl;
		switch (confirm) {
		case 1:
			cout << "Confirmed!" << endl;
			viewAccount();
			break;

		default:
			cout << "Error - That was not an option!" << endl;
			break;
		}
		break;

	case 2:
		// Send or Transfer

	case 3:
		// Deposit

	case 4:
		// Withdraw

	case 5:
		// Open a new Acount

	case 6:
		exit;
		return 0;

	default:
		cout << "That was not an option, returning you to the menu." << endl;
		system("pause"); //sleep
		system("cls");
		goto menu;
	}

	while (true){
		system("cls");
		main();
	}
}

/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
// Define searchVector
int searchVector(std::vector <int> VectorPassed, int whatToBeSearched, int length) {
	//Define some variables
	int i = 0;
	int searchedIndex = 0;
	bool valueFound = false;

	for (i = -1; (i < length) && !valueFound;) {
		//Just for debugging/demonstration purposes
		//cout << i << endl;
		VectorPassed[i];

		if (whatToBeSearched == VectorPassed[i]) {
			searchedIndex = i;
			valueFound = true;
		}
		i++;
	}

	if (valueFound) {
		return searchedIndex;
	}
	else {
		return -1;
	}

}
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
// Define searchArray
int searchArray(int ArrayPassed[], int whatYouNeedToBeSearched, int length) {
	//Define some variables
	int i = 0;
	int searchedIndex = 0;
	bool valueFound;

	for (i = -1; (i < length) && !valueFound;) {
		//Just for debugging/demonstration purposes
		//cout << i << endl;
		ArrayPassed[i];

		if (whatYouNeedToBeSearched == ArrayPassed[i]) {
			searchedIndex = i;
			valueFound = true;
		}
		i++;
	}

	if (valueFound) {
		return searchedIndex;
	}
	else {
		return -1;
	}
}
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
int viewAccount() {
	ifstream file("file.csv");

	std::vector <int> bankAccountNum;
	std::vector <string> bankAccountName;
	std::vector <float> bankAccountBalance;

	string value;
	int lengthOfVector = 0;
	int i;
	int searchedIndex;
	int inputBankNum;

	while (file.good()) {

		// For account number
		getline(file, value, ',');
		bankAccountNum.push_back(stoi(value));

		// For account name
		getline(file, value, ',');
		bankAccountName.push_back(value);

		// For account balance
		getline(file, value, ',');
		bankAccountBalance.push_back(stoi(value));

		lengthOfVector += 1;
	}

	//cout << lengthOfVector << endl;
	cout << "Please enter your Bank Account Number: ";
	cin >> inputBankNum;
	cout << endl;

	if (searchVector(bankAccountNum, inputBankNum, lengthOfVector) >= 0) {
		cout << "Found Account Number " << bankAccountNum[searchVector(bankAccountNum, inputBankNum, lengthOfVector)] << endl;
		cout << "Name of Bank Account Holder " << bankAccountName[searchVector(bankAccountNum, inputBankNum, lengthOfVector)] << endl;
		cout << "Balance of the Bank Account " << bankAccountBalance[searchVector(bankAccountNum, inputBankNum, lengthOfVector)] << endl;
	}
	else{
		cout << "ERROR - No such account exists" << endl;
	}

	system("pause");
}