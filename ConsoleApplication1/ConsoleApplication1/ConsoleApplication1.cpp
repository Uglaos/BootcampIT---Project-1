// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{
	int prvi_igrac, unos = 1;
	int drugi_igrac;
	srand(time(NULL));
	cout << "Upisi 0 za bacanje kockice: ";
	do {

		prvi_igrac = rand() % 6 + 1;
		drugi_igrac = rand() % 6 + 1;
		if (prvi_igrac > drugi_igrac) {
			cout << "Pobjednik je prvi igrac sa vecom kockicom ";
		}
		else if (drugi_igrac > prvi_igrac) {
			cout << "Pobjednik je drugi igrac sa vecom kockicom ";
		}
		else {
			cout << "Izjednaceno ";
		}
		cin >> unos;
	} while (unos != 0);
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
