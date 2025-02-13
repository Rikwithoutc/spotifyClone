#include<iostream>
using namespace std;

struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
};


int main() {

    struct employee rik;
    rik.eId = 1;
    rik.favChar = 'r';
    rik.salary = 120000.00;

    return 0;
}