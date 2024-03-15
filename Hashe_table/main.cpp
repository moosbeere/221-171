// Hashe_table.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Hashe.h"

int main()
{
	int key[] = { 111,212,123,654,534,65 };
	int data[] = { 23, 45, 63,78, 33, 97 };
	int size = sizeof(data) / sizeof(data[0]);
	Hashe h(size);
	
	for (int i = 0; i < size; i++) {
		h.insertItem(key[i], data[i]);
	}
	h.displayHash();
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
