/* Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes
*/



#include<iostream>
#include<math.h>
using namespace std;


class SimpleCalc {
protected:
    float a;
    float b;
    float add;
    float sub;
    float prod;
    float div;

public:
    float getInta(){
        return a;
    }
    float getIntb(){
        return b;
    }
    float setInt(float x, float y){
        a = x;
        b = y;
    }
    
    void calc(){
        add = a + b;
        sub = a - b;
        prod = a * b;
        div = a / b ;
    }

    void show(){
        cout<<"Sum: "<<add<<endl;
        cout<<"Difference: "<<sub<<endl;
        cout<<"Product: "<<prod<<endl;
        cout<<"Division: "<<div<<endl;
    }

};

class ScientificCalc {

protected: 
    float a;
    float b;
    float power;
    float sqrt;
    float cbrt;
    float log;
public:
    float getInta(){
        return a;
    }
    float getIntb(){
        return b;
    }
    void setInt(float x, float y) {
        a = x;
        b = y;
    }
    void calcSc(){
        power = 
    }
};
int main() {
    
    return 0;
}