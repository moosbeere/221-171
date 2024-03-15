#pragma once
#include <iostream>
#include <list>

using namespace std;

class Hashe
{
	int capacity;
	list<int>* table;
public:
	Hashe(int c);
	void insertItem(int key, int data);
	void displayHash();
	int checkPrime(int n);
	int getPrime(int n);
	int hashFunction(int key);

};

