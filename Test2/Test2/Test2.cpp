// Test2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <queue>

using namespace std;

struct pacijent {
	int MBO;
	string ime;
	string prezime;
	int broj_lijekova;
	vector <string> lijekovi;
	
};

void menu();
void save(vector <pacijent> &kartoteka);
void unosNovogPacijenta(vector <pacijent> &kartoteka);
void load(vector <pacijent> &kartoteka);
void ispis(vector <pacijent> kartoteka);
int nadjiPoziciju(string s, char t, int n);
void pretraga(vector<pacijent> kartoteka);
void prijava(vector<pacijent> kartoteka, queue<pacijent> &cekaonica);
void odjava(vector<pacijent> kartoteka, queue<pacijent> &cekaonica);


int main()
{
	int izbor;
	vector <pacijent> kartoteka;
	queue <pacijent> cekaonica;

	load(kartoteka);

	do {
		system("cls");
		menu();
		cin >> izbor;
		switch (izbor) {
		case 1: 
			system("cls");
			unosNovogPacijenta(kartoteka);
			break;
		case 2:
			system("cls");
			ispis(kartoteka);
			system("pause");
			break;
		case 3: 
			system("cls");
			pretraga(kartoteka);
			system("pause");
			break;
		case 4: 
			system("cls");
			prijava(kartoteka, cekaonica);
			system("pause");
			break;
		case 5: 
			system("cls");
			odjava(kartoteka, cekaonica);
			system("pause");
			break;
		case 0: 
			break;
		}

	} while (izbor != 0);

	save(kartoteka);
	system("pause");
}

void menu() {
	cout << "\n\t**  LIJECNICKA ORDINACIJA  **";
	cout << "\n\n\t1. Unos novih pacijenata u kartoteku";
	cout << "\n\t2. Ispis svih pacijenata";
	cout << "\n\t3. Pretraga pacijenata po MBO";
	cout << "\n\t4. Prijava u cekaonicu";
	cout << "\n\t5. Odjava poslije pregleda";
	cout << "\n\t6. Dodavanje recepata za lijekove na korisnicki racun pacijenta";
	cout << "\n\t0. Izlaz i SAVE stanja";
	cout << "\n\n\tVas unos: ";
}

void unosNovogPacijenta(vector <pacijent> &kartoteka){
	int MBO_provjera;
	bool istiPacijent = false;
	pacijent noviPacijent;
	string lijek;
	int counter = 0;

	cout << "\n\tUnesite MBO pacijenta: ";
	cin >> MBO_provjera;

	for (int i = 0; i < kartoteka.size(); i++) { // PROVJERA AKO POSTOJI ISTI MBO PACIJENTA
		if (MBO_provjera == kartoteka[i].MBO) {
			cout << "\n\tGRESKA, pacijent pod tim brojem vec postoji!";
			istiPacijent = true;
			break;
		}
	}

	if (istiPacijent != true) {
		cout << "Ime: ";
		cin >> noviPacijent.ime;
		cout << "Prezime: ";
		cin >> noviPacijent.prezime;
		noviPacijent.MBO = MBO_provjera;
		cout << "Lijekovi: ";
		

		do {                        // do while za dodavanje lijekova u kartoteku
			cin >> lijek;
			if (lijek != "x") {
				noviPacijent.lijekovi.push_back(lijek);
				counter++;
			}
			cout << "Dodaj lijek ili 'x' za kraj dodavanja lijekova: ";

		} while (lijek != "x");

		noviPacijent.broj_lijekova = counter;
		kartoteka.push_back(noviPacijent);
	}


	
}

void save(vector <pacijent> &kartoteka) {       // SAVE svih pacijenata na izlazu iz programa
	ofstream output;
	output.open("pacijenti.txt", ios::out | ios::app);
	for (int i = 0; i < kartoteka.size(); i++) {

		output << "\n";
		
		output << kartoteka[i].MBO << " ";
		output << kartoteka[i].ime << " ";
		output << kartoteka[i].prezime << " ";
		output << kartoteka[i].broj_lijekova << " ";
		for (int j = 0; j < kartoteka[i].lijekovi.size(); j++) {
			output << kartoteka[i].lijekovi[j] << " ";
		}
		
	}
	output.close();
}

void load(vector <pacijent> &kartoteka) {
	pacijent p;
	string lijek;
	ifstream input;
	input.open("pacijenti.txt", ios::in);
	while (input) {
		input >> p.MBO >> p.ime >> p.prezime >> p.broj_lijekova;
		for (int i = 0; i < p.broj_lijekova; i++) {
			input >> lijek;
			p.lijekovi.push_back(lijek);

		}
		kartoteka.push_back(p);
	}
	
	input.close();
	
	system("pause");
}


void ispis(vector <pacijent> kartoteka) {
	cout << "\n\t** POPIS SVIH PACIJENATA **\n";
	for (int i = 0; i < kartoteka.size(); i++) {
		cout << "\n\tMBO: " << kartoteka[i].MBO << "\tIme: " << kartoteka[i].ime << "\tPrezime: " << kartoteka[i].prezime << "\tBroj lijekova: " << kartoteka[i].broj_lijekova << "\tLijekovi: ";

		for (int j = 0; j < kartoteka[i].lijekovi.size(); j++) {
			cout << kartoteka[i].lijekovi[j] << " ";
		}
		cout << endl;
	}

}

void pretraga(vector<pacijent> kartoteka) {

	int MBO_pacijenta;
	cout << "\n\tUnesite MBO pacijenta: ";
	cin >> MBO_pacijenta;


	int start = 0;
	int kraj = kartoteka.size();
	int sredina = (start + kraj) / 2;

	while (start <= kraj && kartoteka[sredina].MBO != MBO_pacijenta)
	{
		if (kartoteka[sredina].MBO < MBO_pacijenta)
		{
			start = sredina + 1;
		}
		else
		{
			kraj = sredina - 1;
		}
		sredina = (start + kraj) / 2;
	}

	if (kartoteka[sredina].MBO == MBO_pacijenta)
	{
		cout << "\n\tPacijent pod MBO: " << MBO_pacijenta << " je " << kartoteka[sredina].ime << " " << kartoteka[sredina].prezime << endl;
	}
	else
	{
		cout << "\n\tNema pacijenta s MBO: " << MBO_pacijenta << endl;
	}
}

void prijava(vector<pacijent> kartoteka, queue<pacijent> &cekaonica) {
	int moj_MBO;
	cout << "\n\t**  PRIJAVA U CEKAONICU **\n";
	cout << "\n\tVas MBO molim: ";
	cin >> moj_MBO;

	for (int i = 0; i < kartoteka.size(); i++)
	{
		if (moj_MBO == kartoteka[i].MBO)
		{
			
			cout << "\n\tU cekaonici je: ";
			cout << kartoteka[i].ime << " " << kartoteka[i].prezime << endl;

			
			pacijent person;

			person.MBO = kartoteka[i].MBO;
			person.ime = kartoteka[i].ime;
			person.prezime = kartoteka[i].prezime;
			person.lijekovi = kartoteka[i].lijekovi;

			cekaonica.push(person);

			break;
		}
	}
}

void odjava(vector<pacijent> kartoteka, queue<pacijent> &cekaonica) {
	if (cekaonica.size() > 1)
	{
	
		cout << "\n\tOdjavljuje se: " << cekaonica.front().ime << " ";
		cout << cekaonica.front().prezime << endl;
		cekaonica.pop();
		cout << "\n\tSljedeci na redu je: " << cekaonica.front().ime << " ";
		cout << cekaonica.front().prezime << endl;
	}
	else if (cekaonica.size() == 1)
	{
		cout << "\n\tOdjavljuje se: " << cekaonica.front().ime << " ";
		cout << cekaonica.front().prezime << endl;
		cout << "\n\tCekaonica je prazna\n";
		cekaonica.pop();
	}


	else
	{
		cout << "\n\tCekaonica je prazna\n";
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
