#include <iostream>
using namespace std;

// n size ke array ke (n+(n+1))/2 subarrays hote hain

//subarr ko print karne ke liye hume array ka starting index and ending index chahiye

void printSubarrays(int *arr, int n){
    for (int start = 0; start<n; start++){
        for (int end = start; end<n; end++){
            for (int i = start; i<=end; i++){
                cout << arr[i] ; 
            }
            cout << ", ";
        }
        cout << endl;
    }
}

int main() {
    int arr [5] = {1, 2, 3, 4, 5};
    int n = 5;
    printSubarrays(arr, n);
    return 0;
}

// is code ki time complexity O(n^3) hai, isko optimize krne ke liye, we have to use strings