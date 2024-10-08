#include "Q1Functions.h"

//constructor
template <typename Item_Type>
Linked_List<Item_Type>::Linked_List() {
	head = nullptr;
	tail = nullptr;
	num_items = 0;
}

//destructor
template <typename Item_Type>
Linked_List<Item_Type>::~Linked_List() {
	while (!empty()) {
		pop_front();
	}
}

//push value to the front of the linked list
template <typename Item_Type>
void Linked_List<Item_Type>::push_front(const Item_Type& d) {
	Node<Item_Type>* newNode = new Node<Item_Type>(d);
	if (empty()) {
		head = tail = newNode;
	}
	else {
		newNode->next = head;
		head = newNode;
	}
	num_items++;
}

//push value to the back of the linked list
template <typename Item_Type>
void Linked_List<Item_Type>::push_back(const Item_Type& d) {
	Node<Item_Type>* newNode = new Node<Item_Type>(d);
	if (empty()) {
		head = tail = newNode;
	}
	else {
		tail->next = newNode;
		tail = newNode;
	}
	num_items++;
}

//remove value from the front of the linked list
template <typename Item_Type>
void Linked_List<Item_Type>::pop_front() {
	if (empty())
		throw out_of_range("List is empty");
	Node<Item_Type>* temp = head;
	head = head->next;
	delete temp;
	num_items--;
	if (empty())
		tail = nullptr;
}

//remove value from the back of the linked list
template <typename Item_Type>
void Linked_List<Item_Type>::pop_back() {
	if (empty())
		throw out_of_range("List is empty");
	if (head == tail) {
		delete head;
		head = tail = nullptr;
	}
	else {
		Node<Item_Type>* current = head;
		while (current->next != tail) {
			current = current->next;
		}
		delete tail;
		tail = current;
		tail->next = nullptr;
	}
	num_items--;
}

//return the value at the front of the linked list
template <typename Item_Type>
Item_Type Linked_List<Item_Type>::front() {
	if (empty())
		throw out_of_range("List is empty");
	return head->data;
}

//return the value at the back of the linked list
template <typename Item_Type>
Item_Type Linked_List<Item_Type>::back() {
	if (empty())
		throw out_of_range("List is empty");
	return tail->data;
}

//return if linked list is empty or not
template <typename Item_Type>
bool Linked_List<Item_Type>::empty() {
	if (head == nullptr)
		return true;
	return false;
}

//insert a value at a specific index
template <typename Item_Type>
void Linked_List<Item_Type>::insert(size_t index, const Item_Type& item) {
	if (index > num_items) 
		throw out_of_range("Index out of range");
	if (index == 0) {
		push_front(item);
	}
	else if (index == num_items) {
		push_back(item);
	}
	else {
		Node<Item_Type>* newNode = new Node<Item_Type>(item);
		Node<Item_Type>* current = head;
		for (size_t i = 0; i < index - 1; ++i) {
			current = current->next;
		}
		newNode->next = current->next;
		current->next = newNode;
		num_items++;
	}
}

//remove a value at a specific index
template <typename Item_Type>
bool Linked_List<Item_Type>::remove(size_t index) {
	if (index >= num_items) 
		return false;
	if (index == 0) {
		pop_front();
	}
	else {
		Node<Item_Type>* current = head;
		for (size_t i = 0; i < index - 1; ++i) {
			current = current->next;
		}
		Node<Item_Type>* toDelete = current->next;
		current->next = toDelete->next;
		if (toDelete == tail) {
			tail = current;
		}
		delete toDelete;
		num_items--;
	}
	return true;
}

//find a specific value in the linked list
template <typename Item_Type>
size_t Linked_List<Item_Type>::find(const Item_Type& item) {
	Node<Item_Type>* current = head;
	size_t index = 0;
	while (current) {
		if (current->data == item) {
			return index;
		}
		current = current->next;
		index++;
	}
	return num_items;
}

template class Linked_List<int>;
