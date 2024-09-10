#include <iostream>
#include <fstream>
#pragma once
using namespace std;

//FUNCTION DECLARATIONS

void IntExists(int array[]);
//PRE: Array created in main
//POST: Check if the integer exists in the array
void ModifyVal(int array[]);
//PRE: Array created in main
//POST: Modify value of user's chosen index
void AddInt(int array[]);
//PRE: Array created in main
//POST: Add integer to the end of the array
void ReplaceInt(int array[]);
//PRE: Array created in main
//POST: Replace value of user's chosen index with 0