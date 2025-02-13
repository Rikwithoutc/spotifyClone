#include<iostream>
#include<fstream>
using namespace std;

int main() {
    string s1 = "Hello World";
    string s2;
    /*
    create an obj of class ofstream to write to a file
    create an obj of class instream to read into a file
    */
    ofstream out("try_23a.txt"); // Writting to a file
    ifstream in("try_23b.txt");  // Reading into a file (till the next whitespace)
    out<<s1;
    // in>>s2;
    
    for (int i = 0; i < 2; i++)
    {
        getline(in, s2);                //gets the whole line
        cout<<s2<<endl;                 
    }
    out.close();
    in.close();
    
    
    return 0;
}