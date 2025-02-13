// A number whose square ends with the number itself
//  like 5--> 5^2 = 25;

#include<iostream>
#include<cmath>
using namespace std;

bool findAuto(int a) {
    int b, t, s, c;
    bool r = false;
    s = 0;
    c = 1;
    b = a*a;
    while (b != 0)
    {
        t = b%10;
        s = s + t * c;
        c = c * 10;
        b = floor(b/10);
        if (s == a) {
            r = true;
            break;
        }
        cout<<s<<endl;
        return r;
    }
    
}

int main() {
    int x;
    cout<<"Enter a number: "<<endl;
    cin>>x;
    if (findAuto(x)==true) {
        cout<<"True"<<endl;
    }
    else {
        cout<<"False"<<endl;
    }
    return 0;
}