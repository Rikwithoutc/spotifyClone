#include<iostream>
#include<vector>
using namespace std;

int binSearch(vector <int> vec, int target){
    //time complexity -------------------------> O(logn)
    //VECTOR needs to be sorted
    
    int start = 0, end = vec.size()-1;

    while(start <= end){
        // int mid = (start + end)/2;

        int mid = start + (end-start)/2;        //to avoid overflow in case of large index values
        

        if (vec[mid] > target){
            end = mid-1;
        } else if (vec[mid] < target){
            start = mid+1;
        }else {
            return mid;
        }
    }
    return -1;
}


int binSearchRec(vector<int> vec, int target, int start, int end){
    
    if (start <= end){
        int mid = start + (end-start)/2;
        if (vec[mid] > target){
            end = mid-1;
            return binSearchRec(vec, target, start, end);
        }else if (vec[mid] < target){
            start = mid + 1;
            return binSearchRec(vec, target, start, end);
        }else {
            return mid;
        }
    }
    return -1;
}

int main() {
    
    vector <int> num = {1,2,3,4,5,6,7,8};
    cout<<binSearchRec(num, 9, 0, num.size()-1)<<endl;
    return 0;
}