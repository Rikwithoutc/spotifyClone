#include<iostream>
#include<cmath>
using namespace std;

//Alphabet diamond pattern

/*
            A
        A   B   C
    A   B   C   D   E
A   B   C   D   E   F   G
    A   B   C   D   E
        A   B   C
            A

*/
// char x= 'A';

void alphaDia(int n){

    int m = (n+1)/2;
    int a = 0;
    int b = 0;
    int x = m+1;

    for (int i = 1; i < (m+1); i++)
    {
        for (int j = 0; j < m-i; j++)
        {
            cout<<" ";
        }

        for (int k = 0; k < i+a; k++)
        {
            cout<<char(65 + k);
        }
        
        for (int l = 0; l < m-i; l++)
        {
            cout<<" ";
        }

        a++;
        cout<<endl;
    }

    for (int o = 1; o < (m); o++)
    {   
        
        
        for (int p = 0; p < o; p++)
        {
            cout<<" ";
        }

        for (int q = 0; q < (x-b); q++)
        {
            cout<<char(65 + q);
        }
        
        for (int r = 0; r < o; r++)
        {
            cout<<" ";
        }

        b += 2;
        cout<<endl;

    }
    
    
}


int main() {
    alphaDia(9);
    
    return 0;
}