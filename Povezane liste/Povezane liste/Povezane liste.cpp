// Povezane liste.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <list>
#include <vector>


using namespace std;

struct Node {
	int value; // vrijecnost
	Node *next; // pokazivac na sljedeci Node
};

void displayList(Node *temp);
void insertElement(Node *&head, int value);
void  prikazElemenata(Node *temp);
void deleteN(Node *&head, int M);
void menu();

int main()
{

	int x;
	Node *head = nullptr;

	do {
		menu();
		cin >> x;
		switch (x) {
		case 1:
			cout << "\nUnesi broj: ";
			int N;
			cin >> N;
			insertElement(head, N);
			break;

		case 2:
			displayList(head);
			break;
		case 3:
			prikazElemenata(head);
			break;
		case 4: 
			cout << "\nUnesi n-ti broj za brisanje: ";
			int M;
			cin >> M;
			deleteN(head, M);
			break;

		default: break;
		} 
	} while (x != 0);
}

void menu() {
	cout << "\n\t1. Unesi vrijednost na prvo mjesto\n";
	cout << "\t2. Broj elemenata u listi\n";
	cout << "\t3. Prikaz svih elemenata\n";
	cout << "\t4. Brisanje N-tog elementa\n\n";
	cout << "Vas izbor: ";
}

void insertElement(Node *&head, int value) {
	Node *temp = new Node;
	temp->value = value;
	temp->next = head;
	head = temp;
}

void displayList(Node *temp) {
	int counter = 0;
	if (temp == NULL) {
		cout << "Lista je prazna!" << endl;
	}
	else
	{
		while (temp != nullptr) {
			
			temp = temp->next;
			counter++;
		}
	}
	cout << "\nBroj elemenata u listi je: " << counter << endl;
	
}

void searchNode(Node *head, int n) {
	Node *temp = head;
	while (temp) {
		if(temp->value == n) {
		cout << n;
		temp = temp->next;
		}
	}
	cout << "Nema node " << n << " u listi";
}

void  prikazElemenata(Node *temp) {
	if (temp == NULL) {
		cout << "Lista je prazna!";
	}
	else {
		while (temp != nullptr) {
			cout << "\nVasi brojevi su " << temp->value << "\t";
			temp = temp->next;

		}
	}
}

void deleteN(Node *&head, int M) {

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
