//Slightly optimized version of Brute Force approach
// bar bar sub arr ka sum nahi nikal rahe hai, apn curr sum me next element add kar rahe hai, jisme ek loop hat ja raha hai

#include <iostream>
#include <climits> //for INT_MIN
using namespace std;

void maxSubarraySum2(int *arr, int n) {
    int maxSum = INT_MIN; //INT_MIN is the minimum value of int
    for (int start = 0; start<n; start++){ //start =2
         int sum = 0;
        for (int end = start; end<n; end++){//end = 2, 3, 4, 5
            sum += arr[end];
            maxSum = max(maxSum, sum);
        }
    }
    cout<<"Max Sum: "<<maxSum<<endl;
}

int main() {
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    maxSubarraySum2(arr, n);
    return 0;
}

// Time Complexity: O(n^2)