//============================================================================
// Name        : array.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void accept_array(int *arr, int size) {
	cout<<"Enter array elements : "<<endl;
	for(int i=0; i<size; i++) {
		cin>>arr[i];
	}
}


// traverse
void traverse_array(int *arr, int size) {
	cout<<"Elements of array are : "<<endl;
	for(int i=0; i<size; i++) {
		cout<<"arr["<<i<<"] : "<<arr[i]<<endl;
	}
}


// deletion
int deletion_array(int *arr, int &size, int position) {
	position = position - 1;
	int data = arr[position];
	for(int i = position; i<size; i++) {
		arr[i] = arr[i+1];
	}
	size = size-1;
	return data;

}


// insertion
void insertion_array(int *arr, int &size, int position, int element) {
	position = position - 1;

	for(int i = size -1; i>=position; i--) {
		arr[i+1] = arr[i];
	}
	size = size + 1;
	arr[position] = element;
	cout<<"Inserted successfully"<<endl;
}

// update
void update_array(int *arr, int position, int element) {
	position = position - 1;
	arr[position] = element;
	cout<<"Updated successfully"<<endl;
}


// search
int search_array(int *arr, int size, int element) {
	for(int i=0; i<size; i++) {
		if(arr[i] == element) {
			return i;
		}
	}
	return -1;
}




int main() {
	int arr[10], position, element;
	int size = sizeof(arr)/sizeof(int);
	accept_array(arr, size);
	traverse_array(arr, size);
	//	cout<<"Enter position : ";
	//	cin>>position;
	//	if(position<1 || position > size)
	//		cout<<"Invalid position"<<endl;
	//	else {
	//		int ele = deletion_array(arr, size, position);
	//		cout<<"Deleted element is : "<<ele<<endl;
	//	}
	//	traverse_array(arr, size);
	//	cout<<"Enter position you want insert a element : ";
	//	cin>>position;
	//
	//	if(position<1 || position > size)
	//		cout<<"Invalid position"<<endl;
	//	else {
	//
	//		cout<<"Enter element : ";
	//		cin>>element;
	//		if(size == 10) {
	//			cout<<"Memory Full"<<endl;
	//		}
	//		else {
	//			insertion_array(arr, size, position, element);
	//		}
	//
	//	}

	//	traverse_array(arr, size);



//	cout<<"Enter position you want update a element : ";
//	cin>>position;
//
//	if(position<1 || position > size)
//		cout<<"Invalid position"<<endl;
//	else {
//
//		cout<<"Enter element : ";
//		cin>>element;
//		update_array(arr, position, element);
//
//	}
//
//	traverse_array(arr, size);

	cout<<"Enter element you want to search : ";
	cin>>element;

	int index = search_array(arr, size, element);
	if(index == -1) {
		cout<<"Element not found"<<endl;
	}
	else {
		cout<<"Element found at index "<< index <<" and its value is : "<<arr[index]<<endl;
	}

	return 0;
}



