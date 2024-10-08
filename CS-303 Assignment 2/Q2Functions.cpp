#include "Q2Functions.h"

//check if the stack is empty
template <typename Item_Type>
bool stack<Item_Type>::empty() const {
	return container.empty();
	
}

//push value on the stack
template <typename Item_Type>
void stack<Item_Type>::push(const Item_Type& item) {
	container.push_back(item);
}

//remove last value from the stack
template <typename Item_Type>
void stack<Item_Type>::pop() {
	if (empty())
		throw out_of_range("Stack is empty");
	container.pop_back();
}

//check what value is at the top of the stack
template <typename Item_Type>
Item_Type& stack<Item_Type>::top() {
	if (empty())
		throw out_of_range("Stack is empty");
	return container.back();
}

//return the size of the stack
template <typename Item_Type>
size_t stack<Item_Type>::size() const {
	return container.size();
}

//calculate the average of the values in the stack 
//   if the stack isn't empty
template <typename Item_Type>
double stack<Item_Type>::Stack_Avg() const {

	if (empty())
		throw out_of_range("Stack is empty");
	
	Item_Type total = 0;
	for (const auto& item : container) {
		total += item;
	}

	return total / container.size();
}

template class stack<int>;