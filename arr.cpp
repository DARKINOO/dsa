#include <iostream>
using namespace std;

int main(){

    int marks[10] = {1,2,3,4,5}; // 0 to 49
    int length = sizeof(marks)/ sizeof(int);
    
    cout << marks[2] << endl;
    cout << marks[6] << endl; //garbage value+warning 
    cout << sizeof(marks) << endl; //total bytes print krega 
    cout << length << endl; // ye apne ko arr ki length  dedega

    for (int i = 0; i < length; i++) // arr ko print krane ke liye
    {
        cout << marks[i] << " ";
    }
    cout << endl;
    
   // array input lene ke liye
   int n;
   cout << "enter length of arr: " ;
   cin >> n ;  // size ko input lere
   int iarr[n];  //dynamically array ko runtime pr generate krwa rhe hai 

   for (int i = 0; i < n; i++)
   {
    cin >> iarr[i];
   }
   
    for (int i = 0; i < n; i++) // arr ko print krane ke liye
    {
        cout << iarr[i] << " ";
    }
    cout << endl;

    return 0;
}