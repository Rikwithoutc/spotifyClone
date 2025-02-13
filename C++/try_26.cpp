#include<iostream>
using namespace std;

template <class T>
class Vector {
public:
    T * arr;
    int size;
    Vector(T a){
        size = a;
        arr = new T[3];
    }

    T dotProd(Vector &v) {
        T d=0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i]*v.arr[i];
        }
         return d;
        
    }
};
int main() {
    
    Vector <int>v1(3);
    Vector <int>v2(3);
    v1.arr[0]= 2.1;
    v1.arr[1]= 1.9;
    v1.arr[2]= 9.9;
    v2.arr[0]= 4.2;
    v2.arr[1]= 0.8;
    v2.arr[2]= 1.5;

    int p = v1.dotProd(v2);
    cout<<p<<endl;

    return 0;
}