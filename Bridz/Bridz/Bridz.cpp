// Bridz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N, zbroj = 0;
	string K;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> K;

		for (int j = 0; j < 13; j++) {
			if (K[j] == 'A') {
				zbroj += 4;
			}
			else if (K[j] == 'K') {
				zbroj += 3;
			}
			else if (K[j] == 'Q') {
				zbroj += 2;
			}
			else if (K[j] == 'J') {
				zbroj += 1;
			}
			else if (K[j] == 'X') {
				zbroj += 0;
				}

		} 
	}cout << zbroj;
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
