// Kadane's Algorithm i.e Dynamic Programming Approach (always use this approach)
// is approach me teen loop nahi chalane padte hai, isme sirf ek loop chalata hai, isme teen cases hote hai:
// +ve aur +ve ko include kroge, -ve aur bada +ve ko include kroge,lekin bada-ve aur +ve ko include nahi kroge isme currsum ko reinitialize karoge 0 pe

#include <iostream>
#include <climits> //for INT_MIN
using namespace std;

void maxSubarraySum3(int *arr, int n) {
    int maxSum = INT_MIN;
    int currSum = 0;
    for (int i = 0; i<n; i++){
        currSum += arr[i];
        if (currSum < 0){
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
    }    
    cout<<"Max Sum: "<<maxSum<<endl;
}

int main() {
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    maxSubarraySum3(arr, n);
    return 0;
}

// Time complexity: O(n)