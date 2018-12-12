// Funkcije.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;


void ninetyNineBottles() {
	cout << 1 << "bottle of beer on the wall" << endl;
	for (int i = 2; i < 100; i++) {
		cout << i << "bottles of beer on the wall" << endl;
	}
};
void zbroj() {
	int temp = 0, x;
	do {
		
		cin >> x;
		temp += x;
	} while (x != 0);
	cout << temp;
}
void lozinka(int lozinka) {
	int counter = 3, lozinka2;
	
	while (counter != 0) {
		cin >> lozinka2;
		if (lozinka == lozinka2) {
			cout << "lozinka tocna";
		}
		else {
			cout << "lozinka netocna" << endl;
			counter--;
		}
	}
}
void tablicaMnozenja() {
	int umnozak;
	int tablica[10][10];
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			umnozak = i * j;
			if (j % 10 == 0) {
				cout << umnozak << endl;
			}
			else {
				cout << i * j << "\t";
			}
		}
	}
}
void izbornik() {
	cout << "Funkcije: " << endl;
	cout << "1. Ninety nine bottles:" << endl;
	cout << "2. Zbroj" << endl;
	cout << "3. Lozinka" << endl;
	cout << "4. Tablica mnozenja" << endl << endl;
	
	int x;

	do {
		system("cls");
		cout << "Odaberi broj(0 za izlaz): ";
		cin >> x;
		switch (x) {
		case 1: ninetyNineBottles();
			break;
		case 2: zbroj();
			break;
		case 3: lozinka(1234);
			break;
		case 4: tablicaMnozenja();
			break;
		case 0: system("cls");
			break;
		default:
			cout << "Unesi drugi broj: ";
		}
	} while (x != 0);
}

int main()
{	
	izbornik();
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
