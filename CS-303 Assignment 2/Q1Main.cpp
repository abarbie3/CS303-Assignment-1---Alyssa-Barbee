//Name: Alyssa Barbee
//Date: 10-8-24
//CS303
//Assignment 2 - Question 1
//Credit: Class Notes

#include "Q1Functions.h"

int main()
{
    //create linked list
    Linked_List<int> list;

    //push values to the back, front, and insert and a certain index
    list.push_back(15);
    list.push_front(10);
    list.push_back(22);
    list.push_front(75);
    list.insert(1, 2);

    //ouput the front, back, and a value at 
    //         a specific index to the user
    cout << "Front: " << list.front() << endl;
    cout << "Back: " << list.back() << endl;
    cout << "Find value at index: " << list.find(10) << endl;

    //pop and output new front value
    list.pop_front();
    cout << "Front after pop_front: " << list.front() << endl; 

    //pop and output new back value
    list.pop_back();
    cout << "Back after pop_back: " << list.back() << endl;

    //error handling when removing a value
    if (list.remove(90) == false) {
        cout << "Can't remove value, out of range" << endl;
    }

	return 0;
}