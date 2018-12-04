// Bond.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int A, B, C, D, E, F, rez = 0;
	cin >> A >> B >> C >> D >> E >> F;
	char znak[5] = { '+', '-', '*', '/' };
	
	for (int i = 0; i < 4; i++) {
		if (i == 0) {
			rez = A + B;
		}
		else if (i == 1) {
			rez = A - B;
		}
		else if (i == 2) {
			rez = A * B;
		}
		else if (i == 3) {
			rez = A / B;
		}
		for (int j = 0; j < 4; j++) {
			if (j == 0) {
				rez += C;
			}
			else if (j == 1) {
				rez -= C;
			}
			else if (j == 2) {
				rez *= C;
			}
			else if (j == 3) {
				rez /= C;
			}
			for (int k = 0; k < 4; k++) {
				if (k == 0) {
					rez += D;
				}
				else if (k == 1) {
					rez -= D;
				}
				else if (k == 2) {
					rez *= D;
				}
				else if (k == 3) {
					rez /= D;
				}
				for (int l = 0; l < 4; l++) {
					if (l == 0) {
						rez += E;
					}
					else if (l == 1) {
						rez -= E;
					}
					else if (l == 2) {
						rez *= E;
					}
					else if (l == 3) {
						rez /= E;
					}
					if (rez == F) {
						cout << A << znak[i] << B << znak[j] << C << znak[k] << D << znak[l] << E << '=' << F;
						i = 5;
						j = 5;
						l = 5;
						k = 5;
						
					}
				}
			}
		}
		
		
		
		
	}
	
	return 0;
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
