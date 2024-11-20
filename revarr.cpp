#include <iostream>
using namespace std;

// with extra space manje naya array bana rhe isme 
void printArr(int *arr, int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 4, 3, 9, 2};
    int n = sizeof(arr) / sizeof(int);

    int copyArr[n];

    for (int i = 0; i < n; i++) // loop lagao ek baar forward ek m backward
    {
        int j = n-i-1; //relation set krao dono arr m
        copyArr[i] = arr[j];
    }
    
    for (int i = 0; i < n; i++){
        arr[i] = copyArr[i];
    }
    
    printArr(arr, n);
    return 0;
}