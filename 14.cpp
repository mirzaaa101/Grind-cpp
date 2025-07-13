// 14. Rotate a 1D array to the right by k steps (cyclic rotation).
#include<iostream>
using namespace std;

void arrayReverse(int *arr, int start, int end){
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateArray(int *arr, int arraySize, int k){
    k = k%arraySize;
    arrayReverse(arr, 0, arraySize-1);
    arrayReverse(arr, 0, k-1);
    arrayReverse(arr, k, arraySize-1);
}

void printArray(int *arr, int arraySize){
    for(int i=0;i<arraySize;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[]={1, 2, 3, 4, 5, 6, 7};
    int k=3;
    int arraySize = sizeof(arr)/sizeof(arr[0]);
    rotateArray(arr, arraySize, k);
    printArray(arr, arraySize);
}