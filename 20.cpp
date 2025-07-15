#include <iostream>
#include <vector>
using namespace std;

void printSubset(vector<int>& arr, int index, int n){
    if(index == n){
        return;
    }
    cout << "{";
    for (int i=0;i<=index;i++){
        cout << arr[i] << ",";
    }
    cout << "}"<< endl;
    printSubset(arr,index+1,n);
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    printSubset(arr, 0, n);
}