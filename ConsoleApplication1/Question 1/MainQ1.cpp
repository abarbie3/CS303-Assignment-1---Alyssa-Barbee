// Name: Alyssa Barbee
// Class: CS303 - Data Structures
// Assignment 1
// Date: 9/9/2024


#include "FunctionQ1.h"

int main()
{
    //Variable and array declarations
    int arrayInts, arrayIndex = 0, array[150];

    //Open and check that the file is open
    ifstream inFile;
    inFile.open("A1input.txt");
    if (!inFile.is_open()) {
        cout << "Unable to open file" << endl;
        return 1;
    }

    //Create and upload values to the array
    while (inFile.good()) {
        inFile >> arrayInts;
        array[arrayIndex] = arrayInts;
        arrayIndex++;
    }

    //Call functions
    IntExists(array);
    ModifyVal(array);
    AddInt(array);
    ReplaceInt(array);

    return 0;
}

