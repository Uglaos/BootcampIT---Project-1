// Sortiranje - zadaci.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;
void menu();
void unos();
void ispis();
void BubbleSort(vector<string> lista);
void ispis_po_imenu();

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
		case 2: system("cls");
				ispis();
				break;
		case 3: system("cls");
				ispis_po_imenu();
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
	string ime, prezime, za_spremanje;
	float prosjek;
	cout << "\n\n\tUnesi ime: ";
	cin >> ime;
	cout << "\n\n\tUnesi prezime: ";
	cin >> prezime;
	cout << "\n\n\tUnesi prosjek: ";
	cin >> prosjek;
	cin.ignore();

	za_spremanje = "\n" + ime + " " + prezime + " " + to_string(prosjek);
	
	ofstream output;
	output.open("student.txt", ios::out | ios::app);
	output << za_spremanje;
	output.close();
}

void ispis() {
	string line;
	vector <string> student;
	ifstream input;
	input.open("student.txt", ios::in | ios::app);
	while (input) {
		getline(input, line);
		student.push_back(line);
	}
	input.close();
	for (int i = 0; i < student.size() - 1; i++)
	{
		cout << student[i] << endl;
	}
	system("pause");
}

void ispis_po_imenu() {

	vector<string> ime;
	vector<string> prezime;
	vector<float> prosjek;
	string i, p;
	float pr;

	ifstream input;
	input.open("student.txt", ios::in);
	while (input) {
		input >> i >> p >> pr;
		ime.push_back(i);
		prezime.push_back(p);
		prosjek.push_back(pr);
	}

	BubbleSort(ime);

	for (int i = 0; i < ime.size(); i++)
	{
		cout << ime[i] << " ";
	}

	system("pause");
}

void BubbleSort(vector<string> lista) {
	string temp;
	int j;
	bool bilaZamjena = true;

	for (int i = 0; bilaZamjena == true; i++) {
		bilaZamjena = false;
		for (j = 0; j < lista.size() - 1 - i; j++) {
			if (lista[j] > lista[j + 1]) {
				temp = lista[j];
				lista[j] = lista[j + 1];
				lista[j + 1] = temp;
				bilaZamjena = true;
			}
		}
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
