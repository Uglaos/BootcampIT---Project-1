// Pretrazivanje2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	int broj = rand() % 100 + 1;
	int start = 1;
	int kraj = 100;
	int sredina = (start + kraj) / 2;
	int counter = 0;
	cout << "Trazeni broj je " << broj << endl;

	while (broj != sredina) {
		
		if (broj > sredina) {
			counter++;
			start = sredina + 1;
			sredina = (start + kraj) / 2;
		}
		else if (broj < sredina) {
			counter++;
			kraj = sredina - 1;
			sredina = (start + kraj) / 2;
		}
		
	}
	cout << "Broj " << sredina << " nadjen iz " << counter << " pokusaja.";

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
