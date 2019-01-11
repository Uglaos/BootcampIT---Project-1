#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

class Korisnik {
private:
	string ime;
	string prezime;
	int index;

	Korisnik();
	~Korisnik();
	static void popis_korisnika();
	static void unos_korisnika();
	static void brisanje_korisnika(Korisnik* k);
	int get_index();
	
public:
	
	static vector <Korisnik*> korisnici;
	void set_ime(string imet);
	void set_prezime(string prezimet);
	string get_ime();
	string get_prezime();
	
	static void izbornik_korisnik();
	static Korisnik* pretraga_korisnika();
	
};
vector <Korisnik*> Korisnik::korisnici;
Korisnik::Korisnik() {
	string ime, prezime;
	cout << "Unesi ime: ";
	cin >> ime;
	cout << "Unesi prezime: ";
	cin >> prezime;
	set_ime(ime);
	set_prezime(prezime);
}
Korisnik::~Korisnik() {};
void Korisnik::set_ime(string imet) {
	ime = imet;
}
void Korisnik::set_prezime(string prezimet) {
	prezime = prezimet;
}
string Korisnik::get_ime() {
	return ime;
}
string Korisnik::get_prezime() {
	return prezime;
}
void Korisnik::unos_korisnika() {
	Korisnik* k = new Korisnik();
	korisnici.push_back(k);
}
int Korisnik::get_index() {
	for (int i = 0; i < korisnici.size(); i++) {
		if (this == korisnici[i]) {
			return i;
		}
	}
}
void Korisnik::brisanje_korisnika(Korisnik* k) {
	korisnici.erase(korisnici.begin() + k->get_index());
}
Korisnik* Korisnik::pretraga_korisnika() {
	string prezime;
	int brojac = 0;
	cout << "Unesi prezime za pretragu: ";
	cin >> prezime;
	for (int i = 0; i < korisnici.size(); i++) {
		if (korisnici[i]->get_prezime() == prezime) {
			return korisnici[i];
		}
	}
	return nullptr;
}
void Korisnik::popis_korisnika() {
	for (int i = 0; i < korisnici.size(); i++) {
		cout << korisnici[i]->get_ime() << " " << korisnici[i]->get_prezime() << endl;
	}
	system("pause");
}
void Korisnik::izbornik_korisnik() {
	int izbor;
	do {
		system("cls");
		cout << "1 - Unos korisnika\n2 - Brisanje korisnika\n3 - Popis korisnika\n0 - Povratak\n\n";
		cout << "Unesi odabir: ";
		cin >> izbor;

		switch (izbor) {
		case 1:
			Korisnik::unos_korisnika();
			break;
		case 2:
			Korisnik::brisanje_korisnika(Korisnik::pretraga_korisnika());
			break;
		case 3:
			Korisnik::popis_korisnika();
			break;
		case 0:
			break;
		default:
			cout << "Odaberi vazeci broj!!" << endl;
		}
	} while (izbor != 0);
}


class Knjiga {
	private:
		string naziv;
		string autor;

		Knjiga();
		~Knjiga();
		static void popis_knjiga();
		static void unos_knjige();
		static void brisanje_knjige(Knjiga* k);
		int get_index;
	public:
		static vector <Knjiga*> knjige;
		void set_naziv(string nazivt);
		string get_naziv();
		void set_autor(string autor);
		string get_autor();
	
		static void knjige_izbornik();
		static Knjiga* pretraga_korisnika();
	};

void Knjiga::set_naziv(string nazivt) {
	naziv = nazivt;
}
string Knjiga::get_naziv() {
	return naziv;
}
void Knjiga::set_autor(string autort) {
	autor = autort;
}
string Knjiga::get_autor() {
	return autor;
}

Knjiga::Knjiga() {

	string autor, naziv;
	cout << "Unesite naziv knjige: ";
	cin >> naziv;
	cout << "Unesite autora knjige: ";
	cin >> autor;
	set_naziv(naziv);
	set_autor(autor);

}
Knjiga::~Knjiga() {};

void Knjiga::popis_knjiga() {
	for (int i = 0; i < knjige.size(); i++) {
		cout << "Knjiga: " << knjige[i]->get_naziv() << "\tAutor: " << knjige[i]->get_autor() << endl;
	}
	system("pause");
}
void Knjiga::unos_knjige() {
	Knjiga* k = new Knjiga();
	knjige.push_back(k);
}

void Knjiga::brisanje_knjige(Knjiga* k) {

}
int main()
	{
	Korisnik::izbornik_korisnik();
	

		/*do {
			menu();
			cin >> x;
			switch (x) {
			
			};

		} while (x != 0);*/
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
