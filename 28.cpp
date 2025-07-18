// 28. Implement binary search on a sorted array (both iterative and recursive).
#include<iostream>
using namespace std;

int binarySearchRecursive(vector<int>& arr, int first, int last, int key){
    if(first>last){
        cout << "Not found." << endl;
        return -1;
    }
    int mid = first + (last-first)/2;
    if(arr[mid] == key){
        return mid;
    }
    else if(arr[mid] > key){
        return binarySearchRecursive(arr, first, mid-1, key);
    }
    else{
        return binarySearchRecursive(arr, mid+1, last, key);
    }
}

int binarySearchIterative(vector<int>& arr, int first, int last, int key){
    while(first<=last){
        int mid = first + (last-first)/2;
        if(key == arr[mid]){
            return mid;
        }
        else if(key<arr[mid]){
            last = mid-1;
        }
        else{
            first = mid+1;
        }
    }
    cout << "Not found." << endl;
    return -1;
}
int main(){
    vector<int> arr = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int key = 23;

    int idx1 = binarySearchRecursive(arr, 0, arr.size() - 1, key);
    if(idx1 != -1) cout << "Recursive: " << key << " found at index " << idx1 << endl;

    int idx2 = binarySearchIterative(arr, 0, arr.size() - 1, key);
    if(idx2 != -1) cout << "Iterative: " << key << " found at index " << idx2 << endl;

    return 0;
}