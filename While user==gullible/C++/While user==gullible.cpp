#include "stdafx.h"

using namespace std;

int input;
int counter;

int main()
{
	while (counter != 10 && input != 5) {
		cout << "Enter a number other than 5" << endl;
		cin >> input;
		counter += 1;
	}
	if (counter == 10) {
		cout << "Wow, you're more patient then I am, you win." << endl;
	}
	else {
		cout << "Hey! you weren't supposed to enter 5!" << endl;
	}
	system("PAUSE");
}