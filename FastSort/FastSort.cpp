// FastSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void sort(int data[], int start, int end);
void swap(int data[], int first, int second);

int main()
{
	int arr[] = { 3,2,5,6,7,1,3,6 };
	sort(arr, 0, size(arr)-1);
	for (int elem : arr) {
		cout << elem << ', ';//������
	}
}

void sort(int data[], int start, int end) {
	if (start >= end) return;//������ ������� ������
	int current = start;
	for (int i = start + 1; i <=  end; i++) {
		if (data[i]<data[start]) swap(data, ++current, i);//����� ���� ��������� � ��������, � �� ��������� �������
	}
	swap(data, start, current);

	if (current > start) {
		sort(data, start, --current);
	}
	if (end>current) {
		sort(data, ++current, end);
	}
}

void swap(int data[], int first, int second) {
	int temp = data[first];
	data[first] = data[second];
	data[second] = temp;
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
