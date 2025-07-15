// 22. Count the number of ways to climb n stairs taking 1 or 2 steps at a time.
#include<iostream>
using namespace std;

int countWays(int n){
    if (n==0 || n==1){
        return 1;
    }
    vector<int> arr(n+1);
    arr[0]=1;
    arr[1]=1;

    for(int i=2;i<=n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    return arr[n];

}

int main(){
    int stairs;
    cin >> stairs;
    cout << countWays(stairs);
}