//Counting sort chote size ke integers ke liye kaam karta hai, isme we use a frequency count of elements from min to max.
// original array ka number --> frequency array ka index ban jaega aur us index pe us number ka frequency store hoga.
// frequency array se hum original array ko sort kar sakte hai.

#include <iostream>
#include <climits>
using namespace std;


void countSort(int arr[], int n){
    int freq[100000]; // range
    int minVal = INT_MAX, maxVal = INT_MIN;

    //1st Step - O(n)
    for(int i =0; i<n; i++){
         freq[arr[i]]++;
          minVal = min(minVal, arr[i]);
          maxVal = max(maxVal, arr[i]);
    }

    //2nd step - O(range) = max-min
    for(int i=minVal, j=0; i<=maxVal; i++){
        while(freq[i] > 0){
            arr[j++] = i;
            freq[i]--;
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 4, 1, 3, 2, 4, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    countSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
} 

// time complexity: O(n+range) = O(n) if range is O(n) then time complexity is O(n) otherwise O(n+range) 