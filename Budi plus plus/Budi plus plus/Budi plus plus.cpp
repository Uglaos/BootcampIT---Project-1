// Budi plus plus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int N, Bi;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> Bi;
	}
	return 0;

}


/*--------------------------PARNI
int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		if (i % 2 == 0) {
			cout << i << endl;
		}
	}
*/
/*-----------------------------OBRNUTO
int n;
	cin >> n;

	for (int i = n; i >= 1; i--) {
		cout << i << endl;
	}
*/
/*--------------------------VEKTORI 2????????????????????
vector<int> vektor;
	int N;

	do {
		cin >> N;
		if (N > 100) {
			vektor.push_back(N);
		}
		else {
			vektor.insert(vektor.begin(), N);
		}
	} while (N != 0);
*/
/* -----------------------VEKTORI 1
int N, zbroj = 0;
	vector<int> pribrojnici;

	do {
		cout << "Unesi broj: ";
		cin >> N;
		zbroj += N;
		pribrojnici.push_back(zbroj);
	} while (N != 0);

	for (int i = 0; i < pribrojnici.size(); i++) {
		cout << pribrojnici[i] << endl;
	}
*/
/* --------------prvih N
int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cout << i;
		cout << endl;

	}
*/
/*---------------------------------KRIZIC KRUZIC MOJA VERZIJA
char polje[9] = { '1','2','3','4','5','6','7','8','9' };

	cout << "------------Krizic Kruzic-----------" << endl;
	cout << "************************************" << endl;
	cout << "--Prvi igrac je x, drugi igrac je o--" << endl << endl;

	cout << "     |     |     " << endl;
	cout << "  " << polje[0] << "  |  " << polje[1] << "  |  " << polje[2] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << polje[3] << "  |  " << polje[4] << "  |  " << polje[5] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << polje[6] << "  |  " << polje[7] << "  |  " << polje[8] << endl;
	cout << "     |     |     " << endl;

	for (int j = 0; j < 9; j++) {
		int x;
		cout << "Unesi poziciju za x ili o: ";
		cin >> x;

		if (j % 2 == 0) {
			if (polje[x - 1] != 'x' && polje[x - 1] != 'o') {
				polje[x - 1] = 'x';
			}
			else {
				cout << "Polje zauzeto, unesi drugu poziciju: ";
				j--;
				continue;
			}
		}
		else if (j % 2 != 0) {
			if (polje[x - 1] != 'x' && polje[x - 1] != 'o') {
				polje[x - 1] = 'o';
			}
			else {
				cout << "Polje zauzeto, unesi drugu poziciju: ";
				j--;
				cin >> x;
				polje[x - 1];
			}
		}

		system("cls");

		cout << "------------Krizic Kruzic-----------" << endl;
		cout << "************************************" << endl;
		cout << "--Prvi igrac je x, drugi igrac je o--" << endl << endl;

		cout << "     |     |     " << endl;
		cout << "  " << polje[0] << "  |  " << polje[1] << "  |  " << polje[2] << endl;
		cout << "_____|_____|_____" << endl;
		cout << "     |     |     " << endl;
		cout << "  " << polje[3] << "  |  " << polje[4] << "  |  " << polje[5] << endl;
		cout << "_____|_____|_____" << endl;
		cout << "     |     |     " << endl;
		cout << "  " << polje[6] << "  |  " << polje[7] << "  |  " << polje[8] << endl;
		cout << "     |     |     " << endl;

		if (j > 3) {

			if (polje[0] == 'x' && polje[1] == 'x' && polje[2] == 'x' || polje[3] == 'x' && polje[4] == 'x' && polje[5] == 'x' || polje[6] == 'x' && polje[7] == 'x' && polje[8] == 'x' || polje[0] == 'x' && polje[3] == 'x' && polje[6] == 'x' || polje[1] == 'x' && polje[4] == 'x' && polje[7] == 'x' || polje[2] == 'x' && polje[5] == 'x' && polje[8] == 'x' || polje[0] == 'x' && polje[4] == 'x' && polje[8] == 'x' || polje[2] == 'x' && polje[4] == 'x' && polje[6] == 'x') {
				cout << "Igrac x je pobjednik" << endl;
				break;
			}
			else if (polje[0] == 'o' && polje[1] == 'o' && polje[2] == 'o' || polje[3] == 'o' && polje[4] == 'o' && polje[5] == 'o' || polje[6] == 'o' && polje[7] == 'o' && polje[8] == 'o' || polje[0] == 'o' && polje[3] == 'o' && polje[6] == 'o' || polje[1] == 'o' && polje[4] == 'o' && polje[7] == 'o' || polje[2] == 'o' && polje[5] == 'o' && polje[8] == 'o' || polje[0] == 'o' && polje[4] == 'o' && polje[8] == 'o' || polje[2] == 'o' && polje[4] == 'o' && polje[6] == 'o') {
				cout << "Igrac o je pobjednik" << endl;
				break;
			}
		}
	}

*/
/* ------------------------------------krizic kruzic
char polje[9] = { '1','2','3','4','5','6','7','8','9' };
for (int i = 1; i <= 9; i++) {
		if (i % 3 != 0) {
			cout << polje[i - 1] << "\t";
		}
		else {
			cout << polje[i - 1] << endl;
		}
	}



	for (int j = 0; j < 9; j++) {

		int x;
		cout << "Unesi poziciju: ";
		cin >> x;

		if (j % 2 == 0) {
			polje[x - 1] = 'x';
		}
		else {
			polje[x - 1] = 'o';
		}
		system("cls");
		for (int i = 1; i <= 9; i++) {
			if (i % 3 != 0) {
				cout << polje[i - 1] << "\t";
			}
			else {
				cout << polje[i - 1] << endl;
			}

		}
		if (j > 3) {

			if (polje[0] == 'x' && polje[1] == 'x' && polje[2] == 'x' || polje[3] == 'x' && polje[4] == 'x' && polje[5] == 'x' || polje[6] == 'x' && polje[7] == 'x' && polje[8] == 'x' || polje[0] == 'x' && polje[3] == 'x' && polje[6] == 'x' || polje[1] == 'x' && polje[4] == 'x' && polje[7] == 'x' || polje[2] == 'x' && polje[5] == 'x' && polje[8] == 'x' || polje[0] == 'x' && polje[4] == 'x' && polje[8] == 'x' || polje[2] == 'x' && polje[4] == 'x' && polje[6] == 'x') {
				cout << "Igrac x je pobjednik" << endl;
				break;
			}
			else if (polje[0] == 'o' && polje[1] == 'o' && polje[2] == 'o' || polje[3] == 'o' && polje[4] == 'o' && polje[5] == 'o' || polje[6] == 'o' && polje[7] == 'o' && polje[8] == 'o' || polje[0] == 'o' && polje[3] == 'o' && polje[6] == 'o' || polje[1] == 'o' && polje[4] == 'o' && polje[7] == 'o' || polje[2] == 'o' && polje[5] == 'o' && polje[8] == 'o' || polje[0] == 'o' && polje[4] == 'o' && polje[8] == 'o' || polje[2] == 'o' && polje[4] == 'o' && polje[6] == 'o') {
				cout << "Igrac o je pobjednik" << endl;
				break;
			}
		}
	}

*/
/* ---------------zadatak 1 polja
int N[10];
	int zbroj = 0;
	int i;
	float prosjek;
	for (i = 0; i < 10; i++) {
		cin >> N[i];
		zbroj += N[i];
	}
	prosjek = float(zbroj) / i;
	cout << setprecision(2) << fixed << prosjek;
*/
/* -----------------------prosti
int N, i;
	bool prost = true;
	cout << "unesi broj: ";
	cin >> N;
	for (i = 2; i < sqrt(N); i++) {
		if (N % i == 0) {
			prost = false;
			break;
		}
	} if (prost) {
		cout << "prost";
	}
	else { cout << "nije prost"; }
*/
 /* ------------------umnozak niza
int N, j;
int sum = 1;
cin >> N;
for (int i = 0; i < N; i++) {
	cin >> j;
	sum *= j;
} cout << sum;
}
*/
/* ---------------prosjek ocjena
int unos;
	int zbroj = 0;
	int counter = 0;
	float prosjek;
	do {
		cin >> unos;
		zbroj += unos;
		counter++;
	} while (unos != 0);
	prosjek = float(zbroj) / (counter-1);
	cout << setprecision(2) << fixed << prosjek << endl;
	return 0;
*/
/* --------------suma niza
int N, j, sum;
	sum = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> j;
		sum += j;
	}cout << sum;
*/
/* -------------MELKIOR
int O1, O2, O3, O4, O5, z;
	cin >> O1 >> O2 >> O3 >> O4 >> O5;
	float p;
	z = O1 + (O2 * 2) + (O3 * 3) + (O4 * 4) + (O5 * 5);
	p = float(z) / (O1 + O2 + O3 + O4 + O5);
	if (O1 > 0) {
		cout << "nedovoljan";
	}
	else if (p >= 2.00 && p < 2.50) {
		cout << setprecision(2) << fixed << p << endl;
		cout << "dovoljan";
	}
	else if (p >= 2.50 && p < 3.50) {
		cout << setprecision(2) << fixed << p << endl;
		cout << "dobar";
	}
	else if (p >= 3.50 && p < 4.50) {
		cout << setprecision(2) << fixed << p << endl;
		cout << "vrlo dobar";
	}
	else if (p >= 4.50 && p <= 5.00) {
		cout << setprecision(2) << fixed << p << endl;
	}
/* ------------pikado
int N, S, K;
	cin >> N;
	cin >> S >> K;
	if (N - S * K > 0) {
		cout << "Dobro";
	}
	else if (N - S * K < 0) {
		cout << "Lose";
	}
	else { cout << "Odlicno"; }
*/
/* cokolada
int R, S, G, M, T;
	cin >> R;
	cin >> S;
	cin >> G;
	cin >> M;
	if ((R*S*G) < M) {
		cout << R*S*G;
	}
	else { cout << 0; }
*/
/* stanica
	int N, K, M, T1, T2;
	cin >> N;
	cin >> K;
	cin >> M;
	T1 = K - N;
	T2 = (K + M) - N;
	if (T1 > 0  ) {
		cout << "STANICA 1: " << T1 << endl;
		cout << "STANICA 2: " << T2 << endl;
	}
	else if (T1 < 0) {
		cout << "ZAKASNIT CE" << endl;
		cout << "STANICA 2: " <<T2 << endl;
	}
*/
/* ects
int U, P;
	cin >> U >> P;
	if (P < 30) {
		cout << 8400;
	}
	else if (P >= 30 && P < 55) {
		cout << (U - P) * 140;
	}
	else if (P >= 55) {
		cout << 0;
	}
	else { cout << "padas godinu frende"; }
*/
/* klizanje
int N, M, A, B;
	cin >> N >> M;
	cin >> A >> B;
	if (N + M >= A + B) {
		cout << A + B;
	}
	else { cout << N + M; }
*/
/* planovi
int A1, A2, B1, B2;
	cin >> A1 >> A2;
	cin >> B1 >> B2;
	if (B1 >= A1 && B1 <= A2) {
		 cout << B2;
	}
	else {
		cout << B1;
	}
*/
/* app
int AO, BO, AC1, AC2, BC1, BC2;
	cin >> AO >> BO;
	cin >> AC1 >> AC2;
	cin >> BC1 >> BC2;

	if (AO > BO) {
		if (AC1 > AC2) {
			cout << AC2;
		}
		else { cout << AC1; }
	}
	else {
		if (BC1 > BC2) {
			cout << BC2;
		}
		else { cout << BC1; }
	}
*/
/* puding
int N, A, B, C, D, E;
	cin >> N >> A >> B >> C >> D >> E;
	N = N - ((A + B + C) / 2);
	E = E / 2;
	D = D / 2;
	if (N >= D) {
		cout << "PUDING OD COKOLADE";
	}
	else if (N <= D) {
		cout << "PUDING OD VANILIJE";
		}
*/
/* kockice
int M, S;
	cin >> M >> S;
	if ( M < 4) {
		M = 7 - M;
	}
	if ( S < 4) {
		S = 7 - S;
	}

	if (M < S) {
		cout << "slavko";
	}
	else if (M > S) {
		cout << "mirko";
	}
	else if (M == S) {
		cout << "nerijeseno";
		}
*/
/* vlak
int A;
	cin >> A;
	switch (A) {
	case 1:
	case 2:
		cout << 8;
		break;
	case 3:
	case 4:
		cout << 5;
		break;
	case 5:
	case 6:
		cout << 4;
		break;
	case 7:
	case 8:
		cout << 1;
		break;
	default :
	cout << "Krivi vlak frende";
	}

*/
/* olovka
int N;
	cin >> N;
	if (N / 100 > N % 10) {
		cout << "LIJEVI NAGIB";
	}
	else if (N / 100 < N % 10) {
		cout << "DESNI NAGIB";
	}
	else { cout << "RAVNOTEZA"; }
*/
/* lubenica
int W;
	cin >> W;
	if (W % 2 == 0) {
		cout << "DA";
	}
	else { cout << "NE"; }
*/
/* Igra
int N;
	cin >> N;
	if (N / 1000 < 9) {
		N += 1000;
	}
	else if(N / 100 % 10 < 9) {
		N += 100;
	}
	else if (N / 10 % 10 < 9) {
		N += 10;
	}
	else {
		++N;
	}
	cout << N;
*/
/* brzina
int M, N, R;
	cin >> M >> N;
	R = N - M;
	cout << R;

*/
/* napolitanke
int R, S, K, D, V;
	cin >> R;
	cin >> S;
	cin >> K;
	cin >> D;
	cin >> V;
	cout << (R*S*K) - (D + V);
*/

/* smart
int a, b, c, d, e, f;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;
	cin >> f;
	cout << endl;
	cout << b << endl;
	cout << d << endl;
	cout << f << endl;

*/

/* miller
int S, A;
	float R;
	cin >> S >> A;
	R = float(S) * 9 / 5 + 32;
	cout << abs(R - A);
*/
/*
int P, D, T;
	cin >> P >> D >> T;
	cout << T;
*/
/* casio
out << (6 / 2) * (1 + 2);
*/
/*
#include <cmath<
int A, B, C;
	cin >> A >> B;
	cout << abs(A - B);
*/

/* kasnjenje
int h2, m2;
	char c;
	int h1 = 8;
	int m1 = 0;
	cin >> h2 >> c >> m2;
	int t = ((h2 * 60) - (h1 * 60)) + (m2 - m1);
	cout << t;
*/
/* postotak
int N, P;
	cin >> N;
	cin >> P;
	cout << (float(P) * N) / 100;
*/

/*podjela
int N, K;
	cin >> N;
	cin >> K;
	cout << K / N << endl;
	cout << K % N ;
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
