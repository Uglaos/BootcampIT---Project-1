
#include "pch.h"
#include <iostream>

using namespace std;

int *uvecajPolje(int* p_vrijednosti, int trenutnaVelicina);
void povecanjePolja();

int main() {

	int N, M, B;
	cout << "unesi velicine polja: ";
	cin >> N >> M >> B;

	int ***p_p_p_polje = new int**[N];

	for (int i = 0; i < N; i++) {
		p_p_p_polje[i] = new int*[M];
		for (int j = 0; j < M; j++) {
			p_p_p_polje[i][j] = new int[B];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			for (int k = 0; k < B; k++) {
				cout << "unesi vrijenosti polja: " << "[" << i << "] [" << j << "] [" << k << "]";
				cin >> p_p_p_polje[i][j][k];
			}
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			for (int k = 0; k < B; k++) {
				cout << p_p_p_polje[i][j][k] << "\t";
			}
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j= 0; j < M; j++){
			delete p_p_p_polje[i][j];
		}
	}

	for (int i = 0; i < N; i++) {
		delete p_p_p_polje[i];
	}
	delete p_p_p_polje;
	p_p_p_polje = nullptr;

}


int *uvecajPolje(int* p_vrijednosti, int trenutnaVelicina)
{

	int *p_nove_vrijednosti = new int[trenutnaVelicina * 2];
	for (int i = 0; i < trenutnaVelicina; ++i)
	{
		p_nove_vrijednosti[i] = p_vrijednosti[i];
	}
	delete p_vrijednosti;
	return p_nove_vrijednosti;
}
void povecanjePolja()
{
	int *uvecajPolje(int* p_vrijednosti, int trenutnaVelicina);
	int brojac = 0;
	int velicina = 5;
	int *p_vrijednosti = new int[velicina];
	int vrijednost;
	do {
		cout << "Unesite broj (ili 0 za izlaz): ";
		cin >> vrijednost;
		if (velicina == brojac + 1)
		{
			// povecamo polje;
			p_vrijednosti = uvecajPolje(p_vrijednosti, velicina);
			velicina *= 2;
		}
		p_vrijednosti[brojac] = vrijednost;
		brojac++;
	} while (vrijednost != 0);

	// ispis brojeva
	for (int i = 0; i < velicina; i++) {
		cout << p_vrijednosti[i] << endl;
		if (p_vrijednosti[i + 1] == 0) {
			break;
		}
	}
}
/*--------------------------------------------dvodimenzionalna polja
int N, M;
	cout << "unesi velicine polja: ";
	cin >> N >> M;

	int **p_p_polje = new int*[N];

	for (int i = 0; i < N; i++) {
		p_p_polje[i] = new int[M];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << "Unesite vrijednost polja " << "[" << i << "] [" << j << "]";
			cin >> p_p_polje[i][j];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << p_p_polje[i][j] << "\t";
		}
	}

	for (int i = 0; i < N; i++) {
		delete p_p_polje[i];
	}

	delete p_p_polje;
	p_p_polje = nullptr;
*/
	/*int x;
	cout << "unesi velicinu polja";
	cin >> x;

	int *polje = new int[x];

	for (int i = 0; i < x; i++) {
		cout << "polje: " << i << endl;
		cin >> polje[i];
	}

	for (int i = 0; i < x; i++) {
		cout << polje[i] << "\t";
	}

	delete polje;
	polje = nullptr
		;
		
		/*int *p_x = new int;
	*p_x = 10;

	cout << "Na adresi " << p_x << " je vrijednost " << *p_x;

	delete p_x;
	p_x = nullptr;*/
	/*int x = 7;
	int *p_x = nullptr;
	p_x = &x;

	cout << "x : " << x << endl;
	cout << "p_x : " << p_x << endl;
	cout << "&x : " << &x << endl;
	cout << "*p_x : " << *p_x << endl;*/


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
