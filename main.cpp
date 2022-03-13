#include <iostream>
#include <fstream>
#include "InsertionSort.h"
#include "ReadWrite.h"

using namespace std;

int main() {
    ReadWrite rw;
    InsertionSort is;

    rw.readFile("Array.txt", is.arr);
    is.displayArray();
    is.insertionSort();
    is.displayArray();
    rw.writeFile(is.arr);
    return 0;
}