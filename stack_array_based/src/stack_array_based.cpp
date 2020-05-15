//============================================================================
// Name        : stack_array_based.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Stack {
	int *arr;
	int top;
	int size;
public:
	Stack() {
		arr = NULL;
		top = -1;
	}

	Stack(int *arr, int size) {
		this->arr = arr;
		top  = -1;
		this->size = size;
	}

	bool isFull() {
		if(top == size-1)
			return true;
		return false;
	}


	void push(int data) {
		if(isFull()) {
			cout<<"Stack is overflow!"<<endl;
		}
		else {
			top = top + 1;
			arr[top] = data;
			cout<<"Element pushed successfully!"<<endl;
		}
	}


	bool isEmpty() {
		if(top == -1)
			return true;
		return false;
	}

	void pop() {
		if(isEmpty()) {
			cout<<"Stack is underflow!"<<endl;
		}
		else {
			arr[top] = -1;
			top--;
			cout<<"Element deleted successfully!"<<endl;
		}
	}


	int peek() {
		if(isEmpty()) {
			cout<<"Stack is underflow!"<<endl;
			return -1;
		}
		else {
			return arr[top];
		}
	}


	void print() {
		for(int i=0; i<top; i++) {
			cout<<arr[i]<<endl;
		}
	}
};


int main() {
	int arr[5];


	return 0;
}
