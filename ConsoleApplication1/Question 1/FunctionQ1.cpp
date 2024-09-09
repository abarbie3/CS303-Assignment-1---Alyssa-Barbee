#include "FunctionQ1.h"

//FUNCTION DEFINITIONS

//Check if certain int is in array
//    if yes return index of int
void IntExists(int array[]) {
	int userNum;
	cout << "Enter integer: ";
	cin >> userNum;

	//Iterate through array to find the user's index
	for (int i = 0; i < 151; i++) {
		if (userNum == array[i]) {
			cout << "Number is at index " << i << " in the array" << endl << endl;
			break;
		} 
	}
}

//Modify val of int when called with the index
//Return old val and new val
void ModifyVal(int array[]) {
	//Create variables and utilize array to save the old value, 
	//    update the value, and display value to the user
	int userIdx, oldVal, newVal;
	cout << "Enter the new value: ";
	cin >> newVal;
	cout << "Enter the index you want to modify: ";
	cin >> userIdx;
	oldVal = array[userIdx];
	array[userIdx] = newVal;
	cout << endl << "Old Value: " << oldVal << endl << "New Value : " << array[userIdx] << endl;
}

//Add new int to the end of the array
void AddInt(int array[]) {
	int currArrSize = 100, userAppend;
	currArrSize++;
	cout << endl << "Enter the integer you want to add to end of the array: ";
	cin >> userAppend;
	array[currArrSize] = userAppend;
}

//Input index by user and replace the val
//    of that index with 0
void ReplaceInt(int array[]) {
	int userRemove;
	cout << endl << "Enter the value you want to remove: ";
	cin >> userRemove;
	array[userRemove] = 0;
}