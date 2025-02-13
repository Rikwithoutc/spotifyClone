#include <iostream>
using namespace std;

int main()
{
    int arr[5]{1, 2, 3, 4, 5};
    int b = sizeof(arr) / sizeof(arr[0]);
    /* 
    int a = sizeof(arr);
    cout << a
         << endl
         << b; */
    /* 
    for (int i = 0; i < b; i++)
    {
        cout<<arr[i]<<endl;
    } */

   //for each loop
/* 
   for( int ele: arr)
   {
    cout<<ele<<endl;
   }
*/


    return 0;

}