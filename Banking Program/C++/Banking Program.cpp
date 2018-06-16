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
	/**/
	ifstream file("file.csv");

	std::vector <int> bankAccountNum;
	std::vector <string> bankAccountName;
	std::vector <float> bankAccountBalance;

	string value;
	int lengthOfVector = 0;
	int i;
	int searchedIndex;

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
	int userChoice = 0;

	cout << "Enter Bank Account Number" << endl;
	cin >> userChoice;

	bool valueFound = false;

	for (i = -1; (i < lengthOfVector) && !valueFound;) {
		if (userChoice == bankAccountNum[i]) {
			searchedIndex = i;
			valueFound = true;
		}
		++i;
	}

	if (valueFound) {
		cout << "Bank Account Number Found!" << endl;
		system("PAUSE");
	}
	else {
		cout << "Number is not in the database!" << endl;
		cout << "Would you like to make an account? y/n" << endl;
		string userStringChoice;
		cin >> userStringChoice;
		if (userStringChoice == "y") {
			// make an account
		}
	}

    return 0;
}

/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
// Define searchVector
int searchVector(std::vector <int> VectorPassed, int whatToBeSearched, int length) {
	//Define some variables
	int i = 0;
	int searchedIndex = 0;
	bool valueFound;

	for (i = -1; (i < length) && !valueFound;) {
		//Just for debugging/demonstration purposes
		cout << i << endl;
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
		cout << i << endl;
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

	cout << lengthOfVector << endl;
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
		system("pause");
	}

}