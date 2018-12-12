// Sortiranje - zadaci.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
void menu();
void unos();

int main()
{
	int x;
	do {
		system("cls");
		menu();
		cin >> x;
		switch (x) {
		case 1: system("cls");
				unos();
				break;
		default: break;
		}

	} while (x != 0);
}

void menu() {
	cout << "\t**  STUDENTSKI IZBORNIK  **\n";
	cout << "\t1. Unos studenata\n";
	cout << "\t2. Ispis studenata\n";
	cout << "\t3. Sortiranje studenata po imenu\n";
	cout << "\t4. Sortiranje studenata po prezimenu\n";
	cout << "\t5. Sortiranje studenata po prosjeku\n";

}

void unos() {
	string student[2], za_spremanje;
	float prosjek;
	cout << "\n\n\tUnesi ime: ";
	cin >> student[0];
	cout << "\n\n\tUnesi prezime: ";
	cin >> student[1];
	cout << "\n\n\tUnesi prosjek: ";
	cin >> prosjek;
	cin.ignore();

	za_spremanje = "\n" + student[0] + " " + student[1] + " " + to_string(prosjek);
	
	ofstream output;
	output.open("student.txt", ios::out | ios::app);
	output << za_spremanje;
	output.close();
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
