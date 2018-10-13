//Answer to Arrays Introduction

#include <iostream>
using namespace std;


int main() {
    int a[1000],n,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=n-1;i>=0;i--){
        cout<<a[i]<<" ";
    }
    return 0;
}

/*
An array is a series of elements of the same type placed in contiguous memory locations that can be individually referenced by adding an index to a unique identifier.

Declaration:

int arr[10]; //Declares an array named arr of size 10, i.e; you can store 10 integers.

Accessing elements of an array:

Indexing in arrays starts from 0.So the first element is stored at arr[0],the second element at arr[1]...arr[9]

You'll be given an array of N integers and you have to print the integers in the reverse order.
*/