// Kuglice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int kutijice[10];
	int b1, b2, z1, z2;

	cin >> b1 >> b2;
	kutijice[b1 - 1] = b1;
	kutijice[b2 - 1] = b2;

	for (int i = 0; i < 5; i++) {
		cin >> z1 >> z2;
		for (int j = 0; j < 5; j++) {
			if (z1 == b1) {
				kutijice[z2 - 1] = b1;
			}
			else if (z2 == b1) {
				kutijice[z1 - 1] = b1;
			}
			if (z1 == b2) {
				kutijice[z2 - 1] = b2;
			}
			else if (z2 == b2) {
				kutijice[z1 - 1] = b2;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << kutijice[i] << endl;
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
