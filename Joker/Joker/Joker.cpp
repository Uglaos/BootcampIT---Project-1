// Joker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
		int kuglica[6];
		int joker[6];
		int serijski[3];
		int joky = 0;


		for (int i = 0; i < 6; i++) {
			cin >> kuglica[i];
			joker[i] = kuglica[i] % 10;
		}

		joky = joker;

		cin >> serijski[0] >> serijski[1] >> serijski[2];


		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 6; j++) {
				if (serijski[i] == joky) {
					cout << serijski[i][j];
				}
			}
		}

		cout << joker[0] << joker[1] << joker[2] << joker[3] << joker[4] << joker[5] << endl;

		system("pause");
		return 0;
	
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
