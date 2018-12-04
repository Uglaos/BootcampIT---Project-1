// Random.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL)); // slot machine
	int a, b, c,r1 = 1, rucka, counter = 100;
	while (r1 != 5) {

		a = rand() % 4 + 1;
		b = rand() % 4 + 1;
		c = rand() % 4 + 1;
		cout << "Zavrti jadnorukog Jacka: ";
		cin >> rucka;
		if (a == b &&  a== c && b ==c) {
			cout << a << b << c << endl;
			cout << "Cestitamo, osvojili ste " << counter << " novaca!";
			r1 = 5;
		}
		else {
			cout << a << b << c << endl;
			cout << "Pokusajte ponovo!" << endl;;
			counter--;
		}
	}

}


/*---------------------------------broj 1-100
int unos, x = rand() % 100 + 1;
	cout << "Pogodi broj 1-100: ";

	do {
		cin >> unos;
		if (unos > x) {
			cout << "Broj je veci od x" << endl;
		}
		else if (unos < x) {
			cout << "Broj je manji od x" << endl;
		}
		else {
			cout << "Pogodak";
		}

	} while (unos != x);

	cout << "Pobjedio si iz ";
*/
/*---------------------------pismo ili glava
int x = rand() % 2;
		if (x == 0) {
			cout << "pismo";
		}
		else if ( x ==1){
			cout << "glava";
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
