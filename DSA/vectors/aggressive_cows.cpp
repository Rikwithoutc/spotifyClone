/*
Assign C cows to N stalls such that min dist b/w them is largest as possible. Return largest min. dist.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isValid(vector <int> vec, int n, int c, int mid){
    int cows = 1, lastPos = vec[0];

    for(int i = 0; i < n; i++){
        if(vec[i] - lastPos >= mid){
            cows++;
            lastPos = vec[i];
        }
        if(cows == c){
            return true;
        }
    }

    return false;
}

int aggresiveCows(vector<int> vec, int n, int c){
    sort(vec.begin(), vec.end());
    int st = 1, end = vec[n-1] - vec[0], mid, ans = -1;

    while( st <= end){
        mid = st + (end - st)/2;

        if(isValid(vec, n, c, mid)){
            ans = mid;
            st = mid + 1;
        }else {
            end = mid - 1;
        }
    }

    return ans;

}
int main() {
    
    vector <int> vec = {1,2,8,4,9};
    int n = 5, c = 3;

    cout<<aggresiveCows(vec, n, c)<<endl;
    return 0;
}