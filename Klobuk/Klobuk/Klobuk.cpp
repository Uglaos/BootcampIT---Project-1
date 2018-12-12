// Klobuk.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <tgmath.h>

using namespace std;

int main()
{
	int N, M, X, Y, harry = 0, hermiona = 0, HA, HE, jednako;
	cin >> N >> M;


	for (int i = N; i > 0; i--) {
		cin >> X;
		harry += pow(10, i - 1) * X;
	}

	for (int i = M; i > 0; i--) {
		cin >> X;
		hermiona += pow(10, i - 1) * X;
	}
	
	cout << "HARRY:" << harry << endl;
	cout << "HERMIONA:" << hermiona << endl;

	if (harry > hermiona) {
		HA = harry - hermiona;
		cout << "HARRY " << HA;
	}
	else if (harry < hermiona) {
		HE = hermiona - harry;
		cout << "HERMIONA " << HE;
	}
	else if (harry == hermiona) {
		jednako = hermiona - harry;
		cout << "JEDNAKO " << jednako;
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
