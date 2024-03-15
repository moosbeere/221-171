#include "Hashe.h"

Hashe::Hashe(int c)
{
	capacity = getPrime(c);
	table = new list<int>[capacity];
}

void Hashe::insertItem(int key, int data)
{
	int index = hashFunction(key);
	table[index].push_back(data);
}

void Hashe::displayHash()
{
	for (int i = 0; i < capacity; i++)
	{
		cout << "table[" << i << "]";
		for (auto x : table[i])
			cout << " --> " << x;
		cout << endl;
	}
}

int Hashe::checkPrime(int n)
{
	int i;
	if (n == 1 || n == 0)
	{
		return 0;
	}
	for (i = 2; i < n / 2; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int Hashe::getPrime(int n)
{
	if (n % 2 == 0)
	{
		n++;
	}
	while (!checkPrime(n))
	{
		n += 2;
	}
	return n;
}

int Hashe::hashFunction(int key)
{
	return key%capacity;
}
