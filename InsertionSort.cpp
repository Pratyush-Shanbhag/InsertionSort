#include <iostream>
#include "InsertionSort.h"

using namespace std;

void InsertionSort::insertionSort() {
    int count;
    int temp;

    for(int i = 1; i < 10; i++) {
        count = i - 1;
        temp = arr[i];

        while(count >= 0 && arr[count] > temp) {
            arr[count+1] = arr[count];
            count--;
        }

        arr[count+1] = temp;
    }
}

void InsertionSort::displayArray() {
    cout << "Array:\n[";

    for (int i = 0; i < 9; i++) {
        cout << arr[i] << " ";
    }

    cout << arr[9] << "]\n" << endl; 
}