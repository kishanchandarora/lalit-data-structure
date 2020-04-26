//============================================================================
// Name        : binary_search.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


int binary_search(int *arr, int start, int end, int key) {
	// divide by two
	int mid = (start + end)/2;
	if(start>end)
		return -1;
	if(arr[mid] == key)
		return mid;
	else if(arr[mid] < key)
		binary_search(arr, mid+1, end, key);
	else
		binary_search(arr, start, mid-1, key);

}

int main() {
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int length = sizeof(arr)/sizeof(int);
	int key;
	cout<<"Enter element you want to search : ";
	cin>>key;
	int res = binary_search(arr, 0, length-1, key);

	if(res == -1) {
		cout<<"Element not found"<<endl;
	}
	else {
		cout<<"Element found at index "<<res<<" whose value is : "<<arr[res]<<endl;
	}
	return 0;
}
