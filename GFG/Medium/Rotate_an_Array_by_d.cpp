#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n = arr.size();
        d %= n;
        // using the juggling algorithm
        // first reversing the first d elements of the arr 
        reverse(arr.begin(), arr.begin() + d);
        // second is the reversing the (n-d) elements of the arr
        reverse(arr.begin() + d, arr.end());
        // now, reverse the entire array
        reverse(arr.begin(), arr.end());
    }
};