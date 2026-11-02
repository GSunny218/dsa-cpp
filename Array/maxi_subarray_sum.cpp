#include<bits/stdc++.h>
using namespace std;

/*int maxSubarraySum(vector<int>& arr, int n) {  //Brute-Force solution
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int sum = 0;
            for(int k = i; k < j; k++) {
                sum += arr[k];
            }
            maxi = max(sum, maxi);
        }
    }
    return maxi;
}*/

/*int maxSubarraySum(vector<int>& arr, int n) {  //Better Solution
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += arr[j];
            maxi = max(sum, maxi);
        }
    }
    return maxi;
}*/

long long maxSubarraySum(vector<int>& arr, int n) {
    long long maxi = LONG_MIN, sum = 0;
    int start, ansStart = -1, ansEnd = -1;
    for(int i = 0; i < n; i++) {
        if(sum == 0) {
            start = i;
        }
        sum += arr[i];
        if(sum > maxi) {
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }
        if(sum < 0) {
            sum = 0;
        }
    }
    return maxi;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int& i : arr) {
        cin >> i;
    }
    cout << maxSubarraySum(arr, n);
    return 0;
}