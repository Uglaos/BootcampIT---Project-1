// Strukture podataka STL 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <queue>
#include <fstream>

using namespace std;

void menu();
void unos_pacijenata();
void odlazak_kod_doktora();

int main()
{
	
	int x;
	do {
		system("cls");
		menu();
		cin >> x;
		switch (x) {
		case 1: system("cls");
				unos_pacijenata();
				break;
		case 2: system("cls");
				odlazak_kod_doktora();
				break;
				
		default: break;
	}
	} while (x != 0);

}

void menu() {
	cout << "\t** DOKTORSKA ORDINACIJA **\n\n";
	cout << "\t1. Unos novih pacijenata\n";
	cout << "\t2. Odlazak kod doktora\n";
	cout << "\t3. Varteks Varazdin!\n";
}

void unos_pacijenata() {
	cout << "\n\tUnesi ime pacijenta: ";
	string ime, za_spremanje;
	cin >> ime;
	za_spremanje = "\n" + ime;
	ofstream output;
	output.open("imena.txt", ios::out | ios::app);
	output << za_spremanje;
	output.close();
}

void odlazak_kod_doktora() {
	queue<string> red;
	string line;
	ifstream input;
	input.open("imena.txt", ios::in);
	while (input) {
		getline(input, line);
		red.push(line);
	}
	input.close();


	char x;
	do {
		cout << "\n\tTrenutni pacijent: " + red.front();
		red.pop();
		cout << "\n\tPacijent u cekaonici: " + red.front();
		cout << "\n\tUnesi 'x' za novog pacijenta i pacijenta koji je sljedeci: ";
		cin >> x;
	} while (x == 'x');

	string za_spremanje;
	for (int i = 0; i < red.size(); i++) {
		za_spremanje += "\n" + red[i];

	}

	
	ofstream output;
	output.open("imena.txt", ios::out);


	
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
