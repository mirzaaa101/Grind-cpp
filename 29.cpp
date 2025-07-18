// 29. Implement selection sort and count the number of comparisons and swaps.
#include<iostream>
#include<vector>
using namespace std;

int numberOfComparisons=0, numberOfSwaps=0;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int getMinIndex(vector<int>& arr, int start, int end){
    int minIndex = start;
    numberOfComparisons++;
    for(int i=start+1;i<end;i++){
        if(arr[i]<arr[minIndex]){
            minIndex = i;
        }
    }
    return minIndex;
}

void selectionSort(vector<int>& arr){
    for(int i=0;i<arr.size()-1;i++){
        int minIndex = getMinIndex(arr,i+1,arr.size());
        if(i != minIndex){
            swap(arr[i],arr[minIndex]);
            numberOfSwaps++;
        }
    }
}

int main(){
    vector<int> arr = {5, 3, 1, 2, 4};
    selectionSort(arr);

    cout << "Sorted array: ";
    for(int element : arr){
        cout << element << " ";
    }
    cout << endl;
    cout << "Number Of Comparisons = " << numberOfComparisons << endl;
    cout << "Number Of Swaps = " << numberOfSwaps << endl;

    return 0;
}