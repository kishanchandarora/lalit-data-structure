//============================================================================
// Name        : singly_circular_linked_list.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class LinkedList;

class Node {
	int data;
	Node *next;
public:
	Node() {
		data = 0;
		next = NULL;
	}

	Node(int data) {
		this->data = data;
		this->next = NULL;
	}

	friend class LinkedList;
};

class LinkedList {
	Node *head;
	int size;
	Node *tail;
public:
	LinkedList() {
		head = tail = NULL;
		size = 0;
	}

	void addFirst(int data) {
		if(head == NULL) {
			head = new Node(data);
			head->next = head;
			size++;
			tail = head;
		}
		else {
			Node *temp = new Node(data);
			temp->next = head;
			head = temp;
			tail->next = head;
			size++;
		}
	}


	void addLast(int data) {
		if(head == NULL) {
			head = new Node(data);
			head->next = head;
			size++;
			tail = head;
		}
		else {
			Node *temp = new Node(data);
			tail->next = temp;
			temp->next = head;
			tail = temp;
			size++;
		}
	}


	void printList() {
		if(head == NULL)
			cout<<"List is empty!"<<endl;
		else {
			Node *trav = head;
			do {
				cout<<trav->data<<" -> ";
				trav = trav->next;
			}while(trav != head);

			cout<<"NULL"<<endl;
		}
	}
};


int menuList() {
	int choice;
	cout<<"0. Exit"<<endl;
	cout<<"1. Print"<<endl;
	cout<<"2. Add First"<<endl;
	cout<<"3. Add Last"<<endl;
	cout<<"4. Add Position"<<endl;
	cout<<"5. Delete First"<<endl;
	cout<<"Enter your choice : ";
	cin>>choice;
	return choice;
}

int main() {
	int choice, ele;
	LinkedList li;

	do {
		switch(choice = menuList()) {
		case 0:
			break;
		case 1:
			cout<<"List elements is : "<<endl;
			li.printList();
			break;
		case 2:
			cout<<"Enter a element : ";
			cin>>ele;
			li.addFirst(ele);
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		default:
			cout<<"Invalid choice!"<<endl;
		}
	}while(choice != 0);


	return 0;
}
