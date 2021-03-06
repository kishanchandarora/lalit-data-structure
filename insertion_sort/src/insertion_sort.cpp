//============================================================================
// Name        : insertion_sort.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void insertion_sort(int *arr, int length) {
	int i, j, key;
	for(i = 1; i<length; i++) {
		key = arr[i];
		j = i-1;
		while(j>=0 && arr[j] > key ) {
			arr[j+1] = arr[j];
			j  = j-1;
		}
		arr[j+1] = key;
	}
}

int main() {
	int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int length = sizeof(arr)/sizeof(int);
	cout<<"Before sorting : "<<endl;
	for(int i=0; i<length; i++) {
		cout<<"arr["<<i<<"] : "<<arr[i]<<endl;
	}

	insertion_sort(arr, length);

	cout<<endl<<endl<<"After sorting : "<<endl;
	for(int i=0; i<length; i++) {
		cout<<"arr["<<i<<"] : "<<arr[i]<<endl;
	}
	return 0;
}
