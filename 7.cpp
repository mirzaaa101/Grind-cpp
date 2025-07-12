#include<iostream>
using namespace std;

void drawPascalTriangle(int rows){
    for(int i = 0; i < rows; i++){
        for(int space = 0; space < rows - i - 1; space++){
            cout << "  ";
        }

        int value = 1;
        for(int j = 0; j <= i; j++){
            cout << value << "   ";
            value = value * (i - j) / (j + 1);
        }
        cout << endl;
    }
}

int main(){
    int rows;
    cin >> rows;
    drawPascalTriangle(rows);
}