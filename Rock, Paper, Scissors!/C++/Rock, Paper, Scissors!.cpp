// Rock, Paper, Scissors!.cpp : Defines the entry point for the console application.

#include "stdafx.h"

using namespace std;

int main()
{
	string choices[3] = { "Rock", "Paper", "Scissors" };
	string userChoice;

	int humanWins = 0;
	int computerWins = 0;

	cout << "Welcome to Rock, Paper, Scissors!" << endl;
	while (true) {

		system("cls");
		cout << "Human Wins: " << humanWins << endl;
		cout << "Computer Wins: " << computerWins << endl;

		srand(time(0));
		cout << "Type your choice (Rock, Paper, Scissors)" << endl;
		cin >> userChoice;

		string computerChoice = choices[rand() % 3];

		cout << computerChoice << endl;

		// Draws
		if (userChoice == "Rock" && computerChoice == "Rock") {
			cout << "Human: " << userChoice << endl;
			cout << "Computer: " << computerChoice << endl;
			cout << "DRAW!" << endl;
			system("PAUSE");
		}
		else if (userChoice == "Paper" && computerChoice == "Paper") {
			cout << "Human: " << userChoice << endl;
			cout << "Computer: " << computerChoice << endl;
			cout << "DRAW!" << endl;
			system("PAUSE");
		}
		else if (userChoice == "Scissors" && computerChoice == "Scissors") {
			cout << "Human: " << userChoice << endl;
			cout << "Computer: " << computerChoice << endl;
			cout << "DRAW!" << endl;
			system("PAUSE");
		}
		/*--------------------------------------------*/
		// Rock and Paper
		else if (userChoice == "Rock" && computerChoice == "Paper") {
			cout << "Human: " << userChoice << endl;
			cout << "Computer: " << computerChoice << endl;
			cout << "Computer Win!" << endl;
			computerWins += 1;
			system("PAUSE");
		}
		else if (userChoice == "Paper" && computerChoice == "Rock") {
			cout << "Human: " << userChoice << endl;
			cout << "Computer: " << computerChoice << endl;
			cout << "Human Win!" << endl;
			humanWins += 1;
			system("PAUSE");
		}
		/*--------------------------------------------*/
		// Paper and Scissors
		else if (userChoice == "Paper" && computerChoice == "Scissors") {
			cout << "Human: " << userChoice << endl;
			cout << "Computer: " << computerChoice << endl;
			cout << "Computer Win!" << endl;
			computerWins += 1;
			system("PAUSE");
		}
		else if (userChoice == "Scissors" && computerChoice == "Paper") {
			cout << "Human: " << userChoice << endl;
			cout << "Computer: " << computerChoice << endl;
			cout << "Human Win!" << endl;
			humanWins += 1;
			system("PAUSE");
		}
		/*--------------------------------------------*/
		//Rock and Scissors
		else if (userChoice == "Rock" && computerChoice == "Scissors") {
			cout << "Human: " << userChoice << endl;
			cout << "Computer: " << computerChoice << endl;
			cout << "Human Win!" << endl;
			humanWins += 1;
			system("PAUSE");
		}
		else if (userChoice == "Scissors" && computerChoice == "Rock") {
			cout << "Human: " << userChoice << endl;
			cout << "Computer: " << computerChoice << endl;
			cout << "Computer Win!" << endl;
			computerWins += 1;
			system("PAUSE");
		}
	}
}

