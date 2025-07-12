// 1. Write a program to check whether a given number is a palindrome without converting it to a string.
#include<iostream>
using namespace std;

int isPalindrome(int n){
    int reverse=0, temp=n;
    while(temp!=0){
        reverse = 10*reverse + temp%10;
        temp = temp/10;
    }
    return n==reverse;
}

int main(){
    int n;
    cin >> n;
    cout << isPalindrome(n);
}