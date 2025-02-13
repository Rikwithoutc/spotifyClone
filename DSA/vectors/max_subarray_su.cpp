#include<iostream>
using namespace std;

//Return the sum of the subarray in a given array with maximum possible sum

int main() {

    int n = 7;
    int arr[n] = {3,-4,5,4,-1,7,-8};

    /*

    BRUTE FORCE APPROACH


    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++){
        int currSum = 0;
        for (int j = i; j < n; j++ ){
            
            currSum += arr[j];
            maxSum = max(maxSum, currSum);
        }
    }
    cout<<maxSum<<endl;
    */

   //   KADANE'S APPROACH

    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i = 0; i < n; i++){
        
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if(currSum < 0){
            currSum = 0;
        }
    }

    cout<<maxSum<<endl;

    return 0;
}