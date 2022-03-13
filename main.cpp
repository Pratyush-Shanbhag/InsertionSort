#include <iostream>
#include <fstream>
#include "InsertionSort.h"
#include "ReadWrite.h"

using namespace std;

int main() {
    ReadWrite rw;
    InsertionSort is;

    is.copyArray(rw.readFile("array.txt"));
    is.insertionSort();
    rw.writeFile(is.arr);
    return 0;
}