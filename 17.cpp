// 17. Perform matrix multiplication of two 2D matrices with input validation.
#include<iostream>
using namespace std;

void matrixMultiplication(int A[][100], int B[][100], int r1, int c1, int r2, int c2){
    int C[100][100];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            C[i][j] = 0;
            for(int k=0;k<c1;k++){
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
    cout << "\nResult of Matrix Multiplication:\n";
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int A[100][100], B[100][100];
    int r1,c1,r2,c2;
    
    cout << "Enter rows and columns of Matrix A: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns of Matrix B: ";
    cin >> r2 >> c2;

    if(c1 != r2){
        cout << "Invalid input! Columns of Matrix A must equal rows of Matrix B." << endl;
        return 0;
    }
    int i, j;

    cout << "Enter elements of Matrix A:\n";
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of Matrix B:\n";
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            cin >> B[i][j];
        }
    }

    matrixMultiplication(A,B,r1,c1,r2,c2);
}