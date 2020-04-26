//============================================================================
// Name        : linear_search.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================



#include <iostream>
using namespace std;

int linear_search(int *arr, int length, int key) {
	for(int i=0; i<length; i++) {
		if(arr[i] == key) {
			return i;
		}
	}
	return -1;
}

int main() {

	int arr[10];
	cout<<"Enter array elements : "<<endl;
	for(int i=0; i<10; i++) {
		cin>>arr[i];
	}
	int length = sizeof(arr)/sizeof(int);
	int key;
	cout<<"Enter element you want to search : ";
	cin>>key;
	int res = linear_search(arr, length, key);

	if(res == -1) {
		cout<<"Element not found"<<endl;
	}
	else {
		cout<<"Element found at index "<<res<<" whose value is : "<<arr[res]<<endl;
	}

	return 0;
}
