#include<iostream>
#include<cmath>
using namespace std;

class Vector {
    float i, j, k;
public:
    void getData(float x = 0, float y = 0, float z = 0) {
        i = x;
        j = y;
        k = z;
    }
    void displayVector(){
        cout<<i<<"i + "<<j<<"j + "<<k<<"k "<<endl;
    }
    void getLength() {
        float len = sqrt((i*i)+(j*j)+(k*k));
        cout<<"The length of the vector is: "<<len<<" unit(s)."<<endl;
        if (len == 1){
            cout<<"It's a unit vector."<<endl;
        } 
    }
};

int main() {
    Vector* ptr = new Vector[2];

    for ( int i = 0; i < 2; i++)
    {   
        float a, b, c;
        cin>>a;
        cin>>b;
        cin>>c;
        (ptr+i)->getData(a ,b , c);
    }

    for (int i = 0; i< 2; i++)
    {
        (ptr+i)->displayVector();
    }
    
    return 0;
}