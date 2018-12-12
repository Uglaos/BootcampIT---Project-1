// Switch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

/*
	switch (broj) <b

*/
int main()
{	
	int a, b; // zadatak 1
	char h;
	cout << "Unesi matematicku operaciju: ";
	cin >> a >> h >> b;
	switch (h) {
		case int('+'): 
			cout << "zbroj je: " << a + b;
			break;
		case int('-') :
				cout << "razlika je: " << a - b;
				break;
		case int('*') :
				cout << "suma je: " << a * b;
				break;
		case int('/') :
				cout << "dijeljenje: " << float(a) / b;
				break;
		default: 
			cout << "nema unosa";
	}
	cout << endl;

	int broj; // zadatak 2
	cout << "Ispisi 1 za unos i ispis broja, 2 za dobar dan i 0 za izlaz: ";
	cin >> broj;
	switch (broj) {
	case 1: 
		int a;
		cout << "unesi broj: ";
		cin >> a;
		cout << "ispis: " << a;
		break;
	case 2:
		cout << "Dobar dan";
		break;
	case 0: 
		break;
	default:
		break;
	};

	/*
	I'll chain you to the truth, 
	for the truth shall set you free
	I'll turn the screws of vengeance and bury you with honesty
	I'll make all your dreams come to life
	And slay them as quickly as they came
	*/
	int z; // zadatak 3
	cout << "Odaberi broj stiha(1-5):  ";
	cin >> z;
	switch (z) {
		case 1:
			cout << "I'll chain you to the truth,\n";
		case 2:
			cout << "for the truth shall set you free\n";
		case 3:
			cout << "I'll turn the screws of vengeance and bury you with honesty\n";
		case 4:
			cout << "I'll make all your dreams come to life\n";
		case 5:
			cout << "And slay them as quickly as they came";
		break;
		default:
			cout << "Frende krivi broj!";
			}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
