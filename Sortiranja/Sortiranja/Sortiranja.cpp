// Sortiranja.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

void BubbleSort(int lista[], int velicina);
void SelectionSort(int lista[], int velicina);
void InsertionSort(int lista[], int velicina);

int main()
{

	int polje[10] = { 2, 6, 52, 58, 47, 7, 8, 46, 21, 12 };
	//SelectionSort(polje, 10);
	//BubbleSort(polje, 10);
	InsertionSort(polje, 10);
	for (int i = 0; i < 10; i++) {
		cout << polje[i] << " ";
	}

	
}

void BubbleSort(int lista[], int velicina) {
	int temp, j;
	bool bilaZamjena = true;

	for (int i = 0; bilaZamjena == true; i++) {
		bilaZamjena = false;
		for (j = 0; j < velicina - 1 - i; j++) {
			if (lista[j] > lista[j + 1]) {
				temp = lista[j];
				lista[j] = lista[j + 1];
				lista[j + 1] = temp;
				bilaZamjena = true;
			}
		}
	}
}

void SelectionSort(int lista[], int velicina) {
	int temp, min;
	for (int i = 0; i < velicina - 1; i++) {
		int min = i;
		for (int j = i+1; j < velicina; j++) {

			if (lista[j] < lista[min]) {
				{
					min = j;
				}
			}
		}
		temp = lista[i];
		lista[i] = lista[min];
		lista[min] = temp;
	}
}

void InsertionSort(int lista[], int velicina) {
	int i, j, temp;
	for (i = 0; i < velicina; i++) {
		temp = lista[i];
		for (j = i; j >= 1 && lista[j - 1] > temp; i--) {
			lista[j] = lista[j - 1];
		}
		lista[j] = temp;
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
