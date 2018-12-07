// Studenti.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;
void unos();
void ispis();
int main()
{
	int counter = 0;
	int x;
	do {
		system("cls");
		cout << "\t\t\t\t\t***STUDENTSKI IZBORNIK***\n\n\t\t\t\t1. Prikaz svih studenata\n\t\t\t\t2. Unos novog studenta\n\t\t\t\t3. Pretrazivanje po rednim brojem\n\t\t\t\t4. Izracun prosjecne ocjene cijele grupe\n\t\t\t\t0. Izlaz" << endl;
		cin >> x;

		switch (x) {
		case 1: system("cls");

			
			cout << "Prikaz svih studenata : " << endl;
			ifstream input;
			input.open("studenti.txt", ios::in | ios::app);
			string line;
			vector <string> podaci;

			while (input) {
				getline(input, line);
				podaci.push_back(line);
			}
			for (int i = 0; i < podaci.size() - 1; i++) {
				cout << podaci[i] << endl;
			}

			input.close();


		case 2: 
			system("cls");
			vector <string> studenti;
			vector <int> rednibroj;
			int rb, ECTS;
			string i, p;
			float pr;
			vector <string> ime;
			vector <string> prezime;
			vector <float> prosjek;
			vector <int> brojECTS;
			string za_spremanje;


			cout << "Unesi redni broj: ";
			cin >> rb;
			cin.ignore();
			rednibroj.push_back(rb);
			cout << "Unesi ime: ";
			getline(cin, i);
			ime.push_back(i);
			cout << "Unesi prezime: ";
			getline(cin, p);
			prezime.push_back(p);
			cout << "Unesi prosjecnu ocjenu: ";
			cin >> pr;
			cin.ignore();
			prosjek.push_back(pr);
			cout << "Unesi broj ECTS bodova: ";
			cin >> ECTS;
			cin.ignore();
			brojECTS.push_back(ECTS);

			za_spremanje = "\n" + to_string(rednibroj[counter]) + ". " + ime[counter] + " " + prezime[counter] + " " + to_string(prosjek[counter]) + " " + to_string(brojECTS[counter]);

			ofstream output;
			output.open("studenti.txt", ios::out | ios::app);
			output << za_spremanje;
			output.close();

			counter++;
		}
	} while (x != 0);
}


void ispis() {
	

	
}  
void redni_broj() {
	int rb;
	cout << "Unesite redni broj studenata: " << endl;
	cin >> rb;
	ifstream input;
	input.open("studenti.txt", ios::in | ios::app);



	input.close();
}
	


/*
void unos() {
	vector <string> studenti;
	vector <int> rednibroj;
	int rb, ECTS;
	string i, p;
	float pr;
	vector <string> ime;
	vector <string> prezime;
	vector <float> prosjek;
	vector <int> brojECTS;
	string za_spremanje;


	cout << "Unesi redni broj: ";
	cin >> rb;
	cin.ignore();
	rednibroj.push_back(rb);
	cout << "Unesi ime: ";
	getline(cin, i);
	ime.push_back(i);
	cout << "Unesi prezime: ";
	getline(cin, p);
	prezime.push_back(p);
	cout << "Unesi prosjecnu ocjenu: ";
	cin >> pr;
	cin.ignore();
	prosjek.push_back(pr);
	cout << "Unesi broj ECTS bodova: ";
	cin >> ECTS;
	cin.ignore();
	brojECTS.push_back(ECTS);

	za_spremanje = "\n" + to_string(rednibroj[counter]) + ". " + ime[counter] + " " + prezime[counter] + " " + to_string(prosjek[counter]) + " " + to_string(brojECTS[counter]);

	ofstream output;
	output.open("studenti.txt", ios::out | ios::app);
	output << za_spremanje;
	output.close();
}
*/
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
