#include<iostream>
using namespace std;

//Find the number of pairs in an array adding up to a total of the given target x


int main() {
    
    int array[] {2, 3, 4, 1, 6, -1};
    int x = 5;
    int ctr = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = i; j < 6; j++)
        {
            if (array[i]+array[j] == x)
            {
                ctr += 1;
            }
        } 
    }

    cout<<ctr<<endl;

    return 0;
}