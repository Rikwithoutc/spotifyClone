#include<iostream>
#include<fstream>

using namespace std;

int main() {
/* 
string s = "Opening file using .out method";
ofstream out;
out.open("try_23a.txt");
out<<s;
out.close();
*/

string s2;
ifstream in;
in.open("try_23b.txt");
while (in.eof()==0)
{
    getline(in, s2);
    cout<<s2<<endl;
}
in.close();
    return 0;
}