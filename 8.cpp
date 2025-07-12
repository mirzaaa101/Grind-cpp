// 8. Write a program to find the GCD and LCM of two numbers.
#include<iostream>
using namespace std;

int gcd(int x, int y){
    if(x == 0 || y == 0) return 0;

    int min=x<y?x:y;
    for(int i=min;i>=1;i--){
        if(x%i==0 && y%i==0){
            return i;
        }
    }
    return 1;
}

int lcm(int x, int y){
    if(x == 0 || y == 0) return 0;
    
    int max = x>y?x:y;
    while(1){
        if(max%x==0 && max%y==0){
            return max;
        }
        max++;
    }
}

int main(){
    int x, y;
    cin >> x >> y;
    cout << endl;
    cout << "GCD: " << gcd(x,y) << endl;
    cout << "LCM: " << lcm(x,y) << endl;
}