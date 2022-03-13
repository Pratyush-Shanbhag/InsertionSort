#include <iostream>
#include <fstream>
#include "ReadWrite.h"

using namespace std;

int* ReadWrite::readFile(string fileName) {
    ifstream infile(fileName);
    int arr[10];
    int count = 0;
    while(!infile.fail()) {
        infile >> arr[count++];
    }

    infile.close();

    return arr;
}

void writeFile(int arr[10]) {

}