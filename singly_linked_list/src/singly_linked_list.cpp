//============================================================================
// Name        : singly_linked_list.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// addfirst, delfirst, addpos, delpos, addlast, dellast

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
		next = NULL;
	}
	friend class LinkedList;
};


class LinkedList {
	Node *head;
public:
	LinkedList() {
		head = NULL;
	}

	// addfirst
	void addfirst(int data) {

		if(head == NULL) {
			// first node;
			head = new Node(data);
		}
		else {
			// head = old node point
			Node *temp = new Node(data);
			temp->next = head;
			head =  temp;
		}

	}

	// addlast
	void addlast(int data) {
		if(head == NULL) {
			// first node;
			head = new Node(data);
		}
		else {
			Node *trav = head;
			while(trav->next != NULL) {
				trav = trav->next;
			}

			trav->next = new Node(data);
		}
	}


	// print list
	void print_list() {
		if(head == NULL) {
			cout<<"list is empty"<<endl;
		}
		else {
			Node *trav = head;
			while(trav!=NULL) {
				cout<<trav->data<<" -> ";
				trav = trav->next;
			}
			cout<<"NULL"<<endl;
		}
	}


	// del position
	void delpos(int position) {

	}


	// add position
	void addpos(int data, int position) {

	}

	//count
	int count() {
		int count;
		if(head == NULL) {
			cout<<"list is already empty"<<endl;
		}
		else {
			Node *trav = head;
			while(trav!=NULL) {
				count++;
				trav = trav->next;
			}
		}
		return count;
	}

	// del first
	void delfirst() {
		if(head == NULL) {
			cout<<"list is already empty!"<<endl;
		}
		else {
			Node *temp = head;
			head = head->next;
			delete temp;
		}
	}


	void dellast() {
		if(head == NULL) {
			cout<<"list is already empty!"<<endl;
		}
		else {
			Node *trav = head;
			if(head->next == NULL) {
				delete head;
				head = NULL;
			}
			else {
				while(trav->next->next != NULL) {
					trav = trav->next;
				}
				Node *temp = trav->next;
				trav->next = NULL;
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
			list.print_list();
			break;
		case 2:
			cout<<"Enter data : ";
			cin>>data;
			list.addfirst(data);
			break;
		case 3:
			cout<<"Enter data : ";
			cin>>data;
			list.addlast(data);
			break;
		case 4:
			list.delfirst();
			break;
		case 5:
			list.dellast();
			break;
		default:
			cout<<"Invalid choice!"<<endl;
		}


	}while(choice != 0);

	return 0;
}
