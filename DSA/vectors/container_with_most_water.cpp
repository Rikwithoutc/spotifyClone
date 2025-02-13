/* 
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.
*/


#include<iostream>
using namespace std;
#include<vector>

//BRUTE FORCE APPROACH-------> O(n^2)


int waterCap(vector <int>& vec){
    int maxCap = INT_MIN;
    for(int i=0; i<vec.size(); i++){
        for (int j=i+1; j<vec.size(); j++){
            int l = min(vec[i], vec[j]);
            int b = j-i;
            maxCap = max(maxCap, l*b);
        }
    }
    return maxCap;
}


//TWO POINTER APPROACH----------> O(n)


int waterCap2(vector <int>& vec){
    int maxCap = INT_MIN;
    int i = 0, j = vec.size()-1;

    while (i < j){
        int l = min(vec[i], vec[j]);
        int b = j-i;
        maxCap = max(maxCap, l*b);
        
        vec[i] < vec[j] ? i++ : j--;
    }
    return maxCap;
}
int main() {
    
    vector <int> arr= {1,8,6,2,5,4,8,3,7};
    cout<<waterCap2(arr)<<endl;
    return 0;
}