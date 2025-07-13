// 16. Print the diagonal sum of a square matrix.
#include<iostream>
using namespace std;

int diagonalSum(int arr[][100], int rows){
    int sum=0;
    for(int i=0;i<rows;i++){
        sum += arr[i][i];
    }
    return sum;
}

int main(){
    int rows;
    cin >> rows;
    int arr[100][100];
    for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
            cin >> arr[i][j];
        }
    }
    cout << diagonalSum(arr, rows);
}