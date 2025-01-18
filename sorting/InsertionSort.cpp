//Insertion sort me array ko 2 parts me divide kiya jata hai, ek part me sorted elements hote hai aur dusre part me unsorted elements hote hai. 
//Sorted part me se ek ek element pick karke usko unsorted part me sahi jagah par insert kiya jata hai. 
//Yeh process tab tak chalta hai jab tak saare elements sorted part me shift nahi ho jate.
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    // Loop for each element in the array
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j  = i - 1;
        // Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;//insert key at the right position
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
    insertionSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
} 


// Time complexity: O(n^2)
