// Multidimenzionalna polja.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;

int main()

{	
	vector <vector < vector <int>>> velikiV;
	int y;

	for (int i = 0; i < 2; i++) {

		vector <vector <int>> v;
		int x;

		for (int j = 0; j < 2; j++) {

			

			for (int i = 0; i < 2; i++) {
				vector <int> temp;
				for (int j = 0; j < 2; j++) {
					cin >> x;
					temp.push_back(x);
				}
				v.push_back(temp);
			}

			for (int i = 0; i < 2; i++) {
				for (int j = 0; j < 2; j++) {
					cout << v[i][j] << "\t";
				}
			} cout << "\n";
		} 
		velikiV.push_back(v);
		
		
	}
	
	return 0;
}



/*---------------------------znakovi O i X u veliko X
int element[7][7];
	int zbroj;

	for (int i = 0; i < 7; i++) {
		cout << endl;
		for (int j = 0; j < 7; j++) {
			zbroj = i + j;

			if (i == j || zbroj == 6) {
				cout << "X ";
			} else {
			cout << "O ";
			}
		}
	}
*/
/*-----------------------------ispit elemenata u 3d tablicu
int element[2][2][2];

	cout << "unos: ";
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
					cin >> element[i][j][k];
			}
		}
	}

	cout << "Element: ";
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				cout << element[i][j][k];
			}
		}
	}
*/
/*-------------------------------tablica umnozak 3
int umnozak;
	int tablica[10][10];
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			umnozak = (i * j) *3;
			if (j % 10 == 0) {
				cout << umnozak << endl;
			}
			else {
				cout << (i * j) * 3 << "\t";
			}
		}
	}
*/
/*---------------------------tablica mnozenja
int umnozak;
	int tablica[10][10];
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			umnozak = i * j;
			if (j % 10 == 0) {
				cout << umnozak << endl;
			}
			else {
				cout << i * j << "\t";
			}
		}
	}
*/
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
