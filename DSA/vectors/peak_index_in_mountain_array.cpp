/* You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

Return the index of the peak element.

Your task is to solve it in O(log(n)) time complexity. */


#include<iostream>
#include<vector>

using namespace std;


int peakIndex(vector <int> vec){

    //BRUTE FORCE APPROACH ---------> O(n)
    for(int i = 0; i<vec.size(); i++){
        if(vec[i]> vec[i+1]){
            return vec[i];
        }
    }
    return -1;
}


int peakIndex2(vector <int> vec){

    // Binary search method -----------> O(logn)

    int start = 1, end = vec.size()-2;

    while (start <= end){
        int mid = start + (end - start)/2;
        
        if(vec[mid]> vec[mid-1] && vec[mid] > vec[mid+1]){
            return vec[mid];
        }else {
            if(vec[mid]< vec[mid+1]){
                start = mid+1;
            }else if(vec[mid]< vec[mid-1]){
                end = mid-1;
            }
        }
    }
    return -1;

}
int main() {
    
    vector <int> vec = {1,2,1};
    cout<<peakIndex2(vec)<<endl;
    return 0;
}