// Create a function that takes two objects of a class point and calculates distance between the points


#include<iostream>
#include<cmath>
using namespace std;

class Point {
    int x , y;
    public:
    
    Point(int a , int b) {
        x = a;
        y = b;
    }
    friend float distance(Point ,Point);
};

float distance(Point p, Point q){
    int x_dist = p.x - q.x;
    int y_dist = p.y - q.y;
    float tot_dist = sqrt((x_dist*x_dist)+(y_dist*y_dist));

    return tot_dist;
}

int main() {
    Point A(2, 3);
    Point B(1, 1);
    float r = distance(A, B);
    cout<<"The distance between A and B is: "<<r; 
    return 0;
}