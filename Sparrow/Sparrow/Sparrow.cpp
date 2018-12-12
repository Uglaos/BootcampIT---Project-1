// Sparrow.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int N, p1, p2, p3, p4, p5;
	cin >> N;
	char DK[5];

	for (int i = 0; i < 5; i++) {
		cin >> DK[i];
	}

	if (DK[0] == 'D') {
			p1 = N / 10000 % 10;
		}
	else {
			p1 = 0;
		}
	if (DK[1] == 'D') {
			p2 = N / 1000 % 10;
		}
	else {
			p2 = 0;
		}
	if (DK[2] == 'D') {
			p3 = N / 100 & 10;
		}
	else {
			p3 = 0;
		}
	if (DK[3] == 'D') {
			p4 = N / 10 % 10;
		}
	else {
			p4 = 0;
		}
	if (DK[4] == 'D') {
			p5 = N % 10;
		}
	else {
			p5 = 0;
		}
	 cout << p1 + p2 + p3 + p4 + p5;
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
