/*
There are N books and each ith books have A[i] no. of pages.

You have to allocate books to M no. of students such that maximum no. of pages allocated to a student is minimum.

-> Each book should be allocated to a student
-> Each student must be allocated atleast 1 book
-> Allotment should be done in a contiguous order

Calculate and return the min. possible no.
Return -1 if valid assignment isn't possible.

*/



#include<iostream>
#include<vector>
using namespace std;


bool isValid(vector <int> vec, int n, int m, int mid);


int bookAllotment(vector <int> &vec, int n, int m){

    if(m > n){
        return -1;
    }
    
    int ans = -1, min = 0, max = 0;
    for(int i: vec){
        max += i;
    }

    int st = min, end = max;
    int mid;

    while (st <= end){
        mid = st + (end - st)/2;
        if (isValid(vec, n , m, mid)){
            ans = mid;
            end = mid-1;

        }else {
            st = mid+1;
        }
    }
    
    return ans;

}

bool isValid(vector<int> vec, int n, int m, int mid){
    int stu = 1, pages = 0;

    for(int i = 0; i < n; i++){
        if(vec[i] > mid){
            return false;
        }
        if(pages + vec[i] <= mid){
            pages += vec[i];
        }else{
            stu++;
            pages = vec[i];
        }
    }
    
    return stu > m ? false : true; 
}

int main() {
    
    vector <int> vec = {15, 17 ,20};
    int n = 4, m = 2;

    // cout<<bookAllotment(vec, n, m)<<endl;
    cout<<isValid(vec, n, m, 32)<<endl;
    return 0;
}