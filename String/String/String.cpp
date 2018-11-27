// String.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//int a, b, c;
	//cin >> a >> b >> c;
	//cout << a << b << c;
	/*string ip = "";
	getline(cin, ip);
	cout << ip << endl;
	*/
	string s1 = "welcome";
	string s2 = "w3resource";

	cout << "Length of welcome is: " << s1.length() << endl;
	cout << "Length of w3resource is: " << s2.length() << endl;
	cout << "Position 4 of welcome is: " << s1[3] << endl;
	cout << "Position 4 of w3resource is: " << s2[3] << endl;
	cout << "Is str1 empty: " << s1.empty() << endl;
	cout << "Is str2 empty: " << s2.empty() << endl;
	cout << "4 znaka od 3 ineksa za s1: " << s1.substr(3, 6) << endl;
	cout << "4 znaka od 3 ineksa za s2: " << s2.substr(3, 9) << endl;
	cout << "zamjena come s went u welcome: " << s1.replace(3, 6, "went") << endl;
	cout << "dodaj string na kraju: " << s1.append(" to bootcamp") << endl;
	cout << "ubaci string ubacivanje na 3 indeks: " << s1.insert(3, "ubacivanje") << endl;
	cout << "ubaci string ubacivanje na 3 indeks: " << s2.insert(3, "ubacivanje") << endl;
	string recenica = "";
	getline(cin, recenica);
	cout << recenica << endl;
	


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
