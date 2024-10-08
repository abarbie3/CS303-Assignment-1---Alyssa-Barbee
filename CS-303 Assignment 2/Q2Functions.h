#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;
#pragma once

//Class of stack created with template
template <typename Item_Type>
class stack {
private:
	vector<Item_Type> container;
public:
	bool empty() const; //check if the stack is empty
	void push(const Item_Type& item); //push value on the stack
	void pop(); //remove last value from the stack
	Item_Type& top(); //check what value is at the top of the stack
	size_t size() const; //return the size of the stack
	double Stack_Avg() const; //calculate the average of the values in the stack
};

