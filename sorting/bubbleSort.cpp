// bubble sort ek aisa algorithm hai 
#include <iostream>
using namespace std;

// Function to perform bubble sort
void bubbleSort(int arr[], int n) {
    // Loop for each element in the array
    for (int i = 0; i < n - 1; i++) {
        // Loop to compare array elements
        for (int j = 0; j < n - i - 1; j++) {
            // Agar current element next element se bada hai to swap karo
            if (arr[j] > arr[j + 1]) {
                // Swap karne ka code
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}