// Strukture podataka STL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;
void stog(string rijec);

int main()
{
	string rijec, palindrom;
	cout << "Unesi rijec: ";
	cin >> rijec;

	stog(rijec);


}

void stog(string rijec) {
	stack <char> stog;
	string obrnuto;
	for (int i = 0; i < rijec.length(); i++) {
		stog.push(rijec[i]);
	}
	for (int i = 0; i < rijec.length(); i++, stog.pop()) {
		obrnuto += stog.top();
	}

	if (rijec == obrnuto) {
		cout << "Rijec je palindrom!\n";
	}
	else if (rijec != obrnuto) {
		cout << "Rijec NIJE palindrom!\n";
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
