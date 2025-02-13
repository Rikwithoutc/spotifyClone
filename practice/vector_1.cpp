#include<iostream>
#include<vector>
using namespace std;

//Q1) Return the last occurence of an element x in a given vector.

template <class T>
int lastOccur(vector<T> v, T x){
    int ind = 0;
    for (int i = 0; i<v.size(); i++){

        if (v[i]==x)
        {
            if (ind<i)
            {
                ind = i;
            } 
        }
    }
    return ind;
}
int main() {
    
    vector<char> vec1;
    vec1.push_back('a');
    vec1.push_back('s');
    vec1.push_back('c');
    vec1.push_back('a');
    vec1.push_back('b');
    vec1.push_back('b');
    vec1.push_back('a');

    cout<<lastOccur<char>(vec1, 'a')<<endl;
    return 0;
}