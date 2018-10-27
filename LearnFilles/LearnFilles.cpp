// LearnFilles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include "BackTracking.h"

int st[10];

void bcktrMenu() {

	std::cout << "Backtracking\n";
	std::cout << "h - help\n";
	std::cout << "1 - permutations\n";
	std::cout << "2 - combinations\n";
	std::cout << "3 - arrangements\n";
	std::cout << "e - exit\n";
}

void clear() {

	for (int i = 0; i <= 10; i++)
		st[i] = 0;

}

void bcktrChoose() {

	bcktrMenu();
	BackTracking back;
	char choice;

	do{
		std::cin >> choice;
		switch (choice) {

		case 'h': bcktrMenu(); break;
		case '1':clear(); back.permutations(3, st, 1); break;
		case '2':clear(); back.combinations(4, 2, st, 1); break;
		case '3':clear(); back.arrangements(4, 3, st, 1); break;
		
		}
	} while (choice != 'e');
}

int main()
{
	bcktrChoose();   
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
