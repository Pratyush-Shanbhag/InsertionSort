#include <iostream>
#include "InsertionSort.h"

using namespace std;

void InsertionSort::insertionSort() {
    int count;
    int temp;

    for(int i = 0; i < 10; i++) {
        count = i - 1;
        temp = arr[i];

        while(count >= 0 && arr[count] < temp) {
            arr[count+1] = arr[count];
            count--;
        }

        arr[count] = temp;
    }
}

void InsertionSort::displayArray() {
    cout << "Array:\n[";

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    cout << "]" << endl; 
}