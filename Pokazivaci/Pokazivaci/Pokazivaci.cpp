// Pokazivaci.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int N[4];




	

}


/* povecanje polja --------------------ivan
void povecanjePolja()
{
	int brojac = 0;
	int velicina = 5;
	int *p_vrijednosti = new int[velicina];
	int vrijednost;
	do {
		cout << "Unesite broj (ili 0 za izlaz): ";
		cin >> vrijednost;
		if (velicina == brojac + 1)
		{
			// povecamo polje;
			p_vrijednosti = uvecajPolje(p_vrijednosti, velicina);
			velicina *= 2;
		}
		p_vrijednosti[brojac] = vrijednost;
		brojac++;
	} while (vrijednost != 0);

	// ispis brojeva
	for (int i = 0; i < velicina; i++) {
		cout << p_vrijednosti[i] << endl;
		if (p_vrijednosti[i + 1] == 0) {
			break;
		}
	}
}

int *uvecajPolje(int* p_vrijednosti, int trenutnaVelicina)
{

	int *p_nove_vrijednosti = new int[trenutnaVelicina * 2];
	for (int i = 0; i < trenutnaVelicina; ++i)
	{
		p_nove_vrijednosti[i] = p_vrijednosti[i];
	}
	delete p_vrijednosti;
	return p_nove_vrijednosti;
}
*/
/*
int N;
	cin >> N;

	int *polje = new int[N];
	for (int i = 0; i < N; i++) {
		cout << "polje " << i << ": ";
		cin >> polje[i];
	}

	for (int i = 0; i < N; i++) {
		cout << polje[i] << "\t";
	}
*/
/* ---------------------prvi zadatak
int a = 1;
	int b = 2;
	int c = 3;
	cout << &a << '\n' << &b << '\n' << &c;
*/
/*
void zamjena1(int prvi, int drugi) {
	int temp;
	temp = prvi;
	prvi = drugi;
	drugi = temp;
}

void zamjena2(int &left, int &right) {
	int temp = left;
	left = right;
	left = temp;
}
void zamjena3(int *p_left, int *p_right) {
	int temp = *p_left;
	*p_right = *p_left;
	*p_left = temp;
}
*/
/* zamjena--------------------------------------------??????????
void zamjena(int prvi, int drugi) {
	int temp;
	temp = prvi;
	prvi = drugi;
	drugi = temp;
	cout << prvi << drugi;
}
*/
/*int x;
	cout << "Unesi velicinu polja: ";
	cin >> x;

	int *polje = new int[x];

	for (int i = 0; i < x; i++) {
		cout << "polje " << i << ": ";
		cin >> polje[i];
	}

	for (int i = 0; i < x; i++) {
		cout << polje[i] << "\t";
	}

	delete polje;
	polje = nullptr;
	/*

	/*int *p_x = new int;
	*p_x = 10;
	cout << "Na adresi " << p_x << " upisana je vrijednost " << *p_x << endl;

	delete p_x;

	p_x = nullptr;
	int a = 5;

	int *p_a = nullptr;
	p_a = &a;

	cout << "a= " << a << endl;
	cout << "p_a= " << p_a << endl;
	cout << "&a= " << &a << endl;
	cout << "*p_aa= " << *p_a << endl;
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
