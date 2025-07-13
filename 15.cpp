// 15. Find the second largest element in an array.
#include<iostream>
#include<climits>
using namespace std;

int secondLargestElement(int *arr, int n){
    int max = INT_MIN;
    int secondMax = INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            secondMax = max;
            max = arr[i];
        }
        else if(arr[i]>secondMax && arr[i]!=max){
            secondMax = arr[i];
        }
    }
    return secondMax;
}

int main(){
    int arr[] = {5,9,2,10,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << secondLargestElement(arr, n);
}