//============================================================================
// Name        : doubly_linked_list.cpp
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
	Node *prev;

public:
	Node() {
		data = 0;
		next = prev = NULL;
	}

	Node(int data) {
		this->data = data;
		next = prev = NULL;
	}

	friend class LinkedList;
};

class LinkedList {
	Node *head;
public:
	LinkedList() {
		head = NULL;
	}

	void addFirst(int data) {
		if(head == NULL) {
			head = new Node(data);
		}
		else {
			Node *temp = new Node(data);
			temp->next = head;
			head->prev = temp;
			head = temp;
		}
	}

	void printList() {
		if(head == NULL) {
			cout<<"List is empty!"<<endl;
		}
		else {
			cout<<"List in forward direction : "<<endl;
			Node *previous, *trav = head;
			while(trav!=NULL) {
				cout<<trav->data<<" -> ";
				previous = trav;
				trav = trav->next;
			}
			cout<<"NULL"<<endl;

			cout<<"List in backward direction : "<<endl;
			while(previous!=NULL) {
				cout<<previous->data<<" -> ";
				previous = previous->prev;
			}
			cout<<"NULL"<<endl;
		}
	}

	void delFirst() {
		if(head == NULL) {
			cout<<"List is empty!"<<endl;
		}
		else {
			if(head->next != NULL) {
				Node *temp = head;
				head = head->next;
				head->prev = NULL;
				delete temp;
			}
			else {
				Node *temp = head;
				head = head->next;
				delete temp;
			}
		}
	}

};


int main() {
	LinkedList list;
	int choice, data;
	do {
		cout<<"0. Exit"<<endl;
		cout<<"1. Print List"<<endl;
		cout<<"2. Add first"<<endl;
		cout<<"3. Add Last"<<endl;
		cout<<"4. Delete first"<<endl;
		cout<<"5. Delete last"<<endl;
		cout<<"Enter your choice : ";
		cin>>choice;
		switch(choice) {
		case 0:
			break;
		case 1:
			list.printList();
			break;
		case 2:
			cout<<"Enter data : ";
			cin>>data;
			list.addFirst(data);
			break;
		case 3:
			cout<<"Enter data : ";
			cin>>data;
			//			list.addlast(data);
			break;
		case 4:
			list.delFirst();
			break;
		case 5:
			//			list.dellast();
			break;
		default:
			cout<<"Invalid choice!"<<endl;
		}


	}while(choice != 0);

	return 0;
}
