// Rekurzije.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

void manji_veci(int broj);
void veci_manji(int broj);
int faktorijeli(int broj);



int main()
{
	//manji_veci(5);
	//veci_manji(5);
	cout<<faktorijeli(6);
	
}

void manji_veci(int broj) {
	if (broj > 0) {
		manji_veci(broj - 1);
	} 
	cout << broj << endl;
}

void veci_manji(int broj) {
	cout << broj << endl;
	if (broj > 0) {
		veci_manji(broj - 1);
	}
}

int faktorijeli(int broj) {
	if (broj == 1) {
		return 1;
	}
	else {
		return broj*faktorijeli(broj - 1);
	}
}

int Fibbonacci(int x) {
	if (x == 0 || x == 1) {
		return x;
	}
	else {
		return Fibbonacci(x - 1) + Fibbonacci(x - 2);
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
