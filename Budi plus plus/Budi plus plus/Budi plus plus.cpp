// Budi plus plus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	
	int A1, A2, B1, B2;
	cin >> A1 >> A2;
	cin >> B1 >> B2;
	if (B1 >)
	return 0;
}
 

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
