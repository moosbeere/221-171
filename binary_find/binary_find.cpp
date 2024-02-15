// binary_find.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int binary_found(int list[], int length, int item) {
    int low = 0;
    int high = length - 1;
    while (low <= high) {
        int mid = trunc((low + high)/2);
        int guess = list[mid];
        if (guess == item) return mid;
        if (guess > item) high = mid - 1;
        else low = mid + 1;
    }
    return NULL;
}

int main()
{
    //std::cout << "Hello World!\n";
    int array[] = { 1,3,5,7,9 };
    int leng = sizeof(array) / sizeof(array[0]);
    std::cout << binary_found(array, leng, -7);
    
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
