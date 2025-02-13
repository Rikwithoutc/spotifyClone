#include<iostream>
using namespace std;


class complex
{
    int a;
    int b;

    public: 
        void setData(int x, int y) {
            a = x;
            b = y;
        
        }
        void setDataBySum (complex z1, complex z2) {
            a = z1.a + z2.a;
            b = z1.b + z2.b;
        }
        void displayData(void) {
            cout<<a<<" + "<<b<<"i"<<endl;
        }
};
int main() {
    
    complex a, b, c;
    
    a.setData(2,5);
    a.displayData();

    b.setData(3,7);
    b.displayData();

    c.setDataBySum(a, b);
    c.displayData();
    return 0;
}