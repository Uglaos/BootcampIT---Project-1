// Else If.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int a, b; // zadatak 1
	cout << "Unesi godine dvije osobe: ";
	cin >> a >> b;
	if (a > b) {
		cout << "Osoba a je starija od osobe b";
	}
	else if (a < b) {
		cout << "Osoba b je starija od osobe a";
	}
	else {
		cout << "Osobe su jednake dobi";
	}
	cout << endl;

	int c; // zadatak 2
	cout << "Unesi broj: ";
	cin >> c;
	if (c % 2 == 0) {
		cout << "Broj je paran";
	}
	else {
		cout << "Broj je neparan";
	}
	cout << endl;

	int lozinka, unos; // zadatak 3
	cout << "Postavi lozinku: ";
	cin >> lozinka;
	cout << "Provjeri lozinku: ";
	cin >> unos;
	if (lozinka == unos) {
		cout << "Lozinka je tocna";
	}
	else {
		cout << "Lozinka je netocna";
	}
	cout << endl;

	int b1, b2; // zadatak 4
	char op;
	 
	cout << "Unesi matematicku operaciju s razmacima: ";
	cin >> b1 >> op >> b2;
	if (op == '+') {
		cout << "Zbroj je: " << (b1 + b2);
	}
	else if (op == '-') {
		cout << "Razlika je: " << (b1 - b2);
	}
	else if (op == '*') {
		cout << "Umnozak je: " << (b1 * b2);
	}
	else if (op == '/') {
		float x = float(b1) / b2;
		cout << "Produkt je: " << x;
	}
	else { cout << "error"; }

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
