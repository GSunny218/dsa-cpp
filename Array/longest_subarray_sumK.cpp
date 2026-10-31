#include<bits/stdc++.h>
using namespace std;

/*int longestSubarrayWithSumK(vector<int>& a, long long k) {  //Brute-force approach
    int n = a.size(), len = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int s = 0;
            for(int k = i; k < j; k++) {
                s += a[k];
            }
            if(s == k) {
                len = max(len, j - i + 1);
            }
        }
    }
    return len;
}*/

/*int longestSubarrayWithSumK(vector<int>& a, long long k) {  //Brute-force approach 2 (Not working)
    int n = a.size(), len = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int s = 0;
            s += a[j];
            if(s == k) {
                len = max(len, j - i + 1);
            }
        }
    }
    return len;
}*/

/*int longestSubarrayWithSumK(vector<int>& a, long long k) {  //Better solution. For positive and negative numbers
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for(int i = 0; i < a.size(); i++) {
        sum += a[i];
        if(sum == k) {
            maxLen = max(maxLen, i + 1);
        }
        long long rem = sum - k;
        if(preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        if(preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }
    return maxLen;
}*/

int longestSubarrayWithSumK(vector<int>& a, long long k) {  //Optimal solution
    int left = 0, right = 0;
    long long sum = a[0];
    int maxLen = 0;
    int n = a.size();
    while(right < n) {
        while(left <= right && sum > k) {
            sum -= a[left];
            left++;
        }
        if(sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if(right < n) {
            sum += a[right];
        }
    }
    return maxLen;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int& i : arr) {
        cin >> i;
    }
    int k;
    cin >> k;
    cout << longestSubarrayWithSumK(arr, k);
    return 0;
}