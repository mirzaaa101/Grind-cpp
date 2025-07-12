// 3. Find all Armstrong numbers between 100 and 999.
#include<iostream>
using namespace std;

int countDigit(int n){
    int digit=0;
    while(n!=0){
        digit++;
        n=n/10;
    }
    return digit;
}

int power(int b, int p){
    int result=1;
    for(int i=0;i<p;i++){
        result=result*b;
    }
    return result;
}

int isArmstrong(int n){
    int temp=n;
    int sum=0;
    int digit=countDigit(n);
    while(temp!=0){
        sum = sum + power(temp%10,digit);
        temp = temp/10;
    }
    return n==sum;
}

void printArmstrongNumber(int start, int end){
    for(int i=start; i<=end; i++){
        if(isArmstrong(i)){
            cout << i << " ";
        }
    }
}

int main(){
    printArmstrongNumber(100, 999);
}