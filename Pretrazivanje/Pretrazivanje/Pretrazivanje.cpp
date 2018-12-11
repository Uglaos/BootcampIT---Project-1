// Pretrazivanje.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
int pretrazivanje(vector <string> rijeci, int velicina, string trazena_rijec);
void pretrazivanje_mjesta(vector <string> rijeci, string trazena_rijec);

int main()
{
	
	ifstream input;
	vector <string> rijeci;
	string rijec;
	string trazena_rijec = "him";
	input.open("pojmovi.txt");
	while (input) {
		input >> rijec;
		rijeci.push_back(rijec);
	};
	input.close();

	pretrazivanje_mjesta(rijeci, trazena_rijec);

}

int pretrazivanje(vector <string> rijeci, string trazena_rijec) {
	for (int i = 1; i <= rijeci.size(); i++) {
		if (rijeci[i - 1] == trazena_rijec) {
			return i;
		}
	}
	return -1;
}

void pretrazivanje_mjesta(vector <string> rijeci, string trazena_rijec) {
	for (int i = 0; i < rijeci.size(); i++) {

		if (trazena_rijec == rijeci[i]) {

			cout << "Pronadena je trazena rijec te se ona nalazi na poziciji: " << i << " " << endl;
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
