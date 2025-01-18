//Selection sort me har ek iteration me hum array ke sabse chote element ko find karte hai aur usko array ke starting me shift karte hai.

#include <iostream>
using namespace std;

void selectionSort( int arr[], int n){
    for(int i=0; i<n-1; i++){
        int minIdx = i;
        //loop to find minimum element
        for (int j = i+1; j<n; j++)
        {
            if(arr[j] < arr[minIdx]){
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]); 
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}

// Time complexity: O(n^2)