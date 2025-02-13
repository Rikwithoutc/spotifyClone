#include <iostream>
using namespace std;

class Y;

class X
{
private:
    int data;

public:
    int data2;
    void setData(int a)
    {
        data = a;
    }

    void displayData(void)
    {
        cout << "data: " << data << endl;
        cout << "data2: " << data2 << endl;
    }

    friend void calc(X, Y);
};

class Y
{

    int num;

public:
    int num2;
    void setNum(int b)
    {
        num = b;
    }
    void displayNum(void)
    {
        cout << "num: " << endl;
        cout << "num2: " << endl;
    }
        friend void calc(X, Y);

};

void calc(X x, Y y) {
    cout<<((x.data + y.num)*(x.data2+y.num2))<<endl;
}
int main()
{
    X p;
    Y q;
    p.setData(3);
    q.setNum(9);
    p.data2 = 7;
    q.num2 = 8;
    calc(p,q);

    return 0;
}