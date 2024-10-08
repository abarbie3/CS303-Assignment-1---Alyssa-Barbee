#include <iostream>
using namespace std;
#pragma once

//struct to create node for linked list
template <typename Item_Type> 
struct Node {
	Item_Type data;
	Node* next;

	Node(const Item_Type& data_item, Node* next_ptr = NULL) :
		data(data_item), next(next_ptr) {}
};

//Linked list class
template <typename Item_Type>
class Linked_List {
protected:
	Node<Item_Type>* head;
	Node<Item_Type>* tail;
	size_t num_items;

public:
	Linked_List(); //constructor
	~Linked_List(); //destructor
	void push_front(const Item_Type& d); //push value to the front of the linked list
	void push_back(const Item_Type& d); //push value to the back of the linked list
	void pop_front(); //remove value from the front of the linked list
	void pop_back(); //remove value from the back of the linked list
	Item_Type front(); //return the value at the front of the linked list
	Item_Type back(); //return the value at the back of the linked list
	bool empty(); //return if linked list is empty or not
	void insert(size_t index, const Item_Type& item); //insert a value at a specific index
	bool remove(size_t index); //remove a value at a specific index
	size_t find(const Item_Type& item); //find a specific value in the linked list
};