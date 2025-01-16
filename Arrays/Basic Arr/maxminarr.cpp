#include <iostream>
using namespace std;

int main(){    
   // array input lene ke liye
   int n;
   cout << "enter length of arr: " ;
   cin >> n ;  // size ko input lere
   int arr[10000];  //dynamically array ko runtime pr generate krwa rhe hai 

   for (int i = 0; i < n; i++)
   {
    cin >> arr[i];
   }
   
    for (int i = 0; i < n; i++) // arr ko print krane ke liye
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int max = arr[0]; // first element ko max assign krenge
    int min = arr[0];  // first element ko min assign krenge
    for (int i = 0; i < n; i++)  // har ek element se compare krenge
    {
        if (arr[i] > max)   // agar koi use bada hai to use max ki value dedenge
        {
            max = arr[i];
        }

        if (arr[i] < min)   // agar koi use chota hai to use min ki value dedenge
        {
            min = arr[i];
        }
    }
    cout << "max value = " << max << endl;
    cout << "min value = " << min << endl;
    
    return 0;
}