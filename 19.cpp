// 19. Find the subarray with the maximum sum (Kadane’s algorithm).
#include<iostream>
#include<vector>
using namespace std;

int maxSubarraySum(vector<int> arr){
    int maxSum = INT_MIN;
    int currentSum=0;

    for(int i=0;i<arr.size();i++){
        currentSum += arr[i];
        maxSum = max(maxSum, currentSum);
        if(currentSum<0){
            currentSum=0;
        }
    }
    return maxSum;
}

int main(){
    vector<int> arr = {2, 3, -8, 7, -1, 2, 3};
    cout << maxSubarraySum(arr);
    return 0;
}