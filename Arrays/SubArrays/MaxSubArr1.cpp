//Brute Force Approach
// isme sare sub arr nikal ke check karna padega ki konsa sub arr ka sum max hai

#include <iostream>
#include <climits> //for INT_MIN
using namespace std;

void maxSubarraySum1(int *arr, int n) {
    int maxSum = INT_MIN; //INT_MIN is the minimum value of int
    for (int start = 0; start<n; start++){
        for (int end = start; end<n; end++){
            int sum = 0;
            for (int i = start; i<=end; i++){
                sum += arr[i];
            }
            cout<<sum<< ",";
            maxSum = max(maxSum, sum);
        }
        cout<<endl;
    }
    cout<<"Max Sum: "<<maxSum<<endl;
}

int main() {
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    maxSubarraySum1(arr, n);
    return 0;
}

// Time Complexity: O(n^3)