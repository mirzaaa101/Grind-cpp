// 6. Convert a decimal number to binary without using built-in functions.
#include<iostream>
using namespace std;

void decimalToBinary(int decimal){
    int binary[32], i=0;
    while(decimal!=0){
        int rem = decimal%2;
        binary[i++]=rem;
        decimal = decimal/2;
    }
    for(int j = i - 1; j >= 0; j--){
        cout << binary[j];
    }
}

int main(){
    int n;
    cin >> n;
    cout << endl;
    decimalToBinary(n);
}