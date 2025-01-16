// The Trapping Rainwater problem is a common coding challenge that involves finding out how much water can be trapped between bars after it rains.
// you have a series of vertical bars of different heights, and these bars are placed next to each other. When it rains, water will be trapped between the bars. The amount of water trapped depends on the height of the bars and the gaps between them.

// For example, if you have bars of heights [4,2,0,6,3,2,5], the water will be trapped in the valleys formed by these bars. The goal is to calculate the total amount of water trapped.

// To solve this problem, you need to:
// Identify the left and right boundaries for each bar.
// Calculate the water trapped above each bar by finding the minimum of the left and right boundaries and subtracting the height of the bar itself.
// Sum up the water trapped above all bars to get the total amount.

#include <iostream>
using namespace std;

int trap(int *heights, int n){
     int leftMax[20000], rightMax[20000];
     leftMax[0] = heights[0];
     rightMax[n-1] = heights[n-1];

     for(int i=1; i<n; i++){
        leftMax[i] = max(leftMax[i-1], heights[i-1]);
     }

     for(int i=n-2; i>=0; i--){
        rightMax[i] = max(rightMax[i+1], heights[i+1]);
     }

     int waterTrapped = 0;
     for(int i=0; i<n; i++){
        int currwater = min(leftMax[i], rightMax[i]) - heights[i];
        if (currwater > 0)
        {
            waterTrapped += currwater;
        }  
     }
     cout<<"Total water trapped: "<<waterTrapped<<endl;
     return waterTrapped;
}

int main(){
    int heights[7] = {4,2,0,6,3,2,5};
    int n = sizeof(heights)/sizeof(int);
    trap(heights, n);
    return 0; 
} 

// Time complexity: O(n)