// phone_book.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<unordered_map>
#include<unordered_set>

using namespace std;

int main()
{
	unordered_map<string, int> book;
	book["sahar"] = 9;
	book.insert({ "olga", 9 });
	book.insert({ "mira", 9 });
	book.insert({ "kira", 9 });
	//for (auto& elem : book) {
	//	cout << elem.first << " " << elem.second << endl;
	//}
	//cout << book.at("olga");

	unordered_set<string> spisok;
	string name;
	spisok.insert("olga");
	cout << "Enter you name: ";
	cin >> name;
	auto search = spisok.find(name);
	if (search == spisok.end()) {
		spisok.insert(name);
		cout << "let's go" << endl;
	}
	else cout << "already" << endl;
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
