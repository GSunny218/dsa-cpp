#include<bits/stdc++.h>
using namespace std;

/*int findNumOnce(vector<int>& arr, int n) {  //Brute-force approach
    for(int i  = 0; i < n; i++) {
        int cnt = 0;
        int num = arr[i];
        for(int j = 0; j < n; j++) {
            if(arr[j] == num) {
                cnt++;
            }
        }
        if(cnt == 1) {
            return arr[i];
        }
    }
}*/

/*int findNumOnce(vector<int>& arr, int n) {  //Better approach
    map<long long, int> mp;
    for(int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }
    for(auto it : mp) {
        if(it.second == 1) {
            return it.first;
        }
    }
}*/

int findNumOnce(vector<int>& arr, int n) {  //Optimal solution
    int xor1 = 0;
    for(int i  = 0; i < n; i++) {
        xor1 ^= arr[i];
    }
    return xor1;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int& i : arr) {
        cin >> i;
    }
    cout << findNumOnce(arr, n);

    return 0;
}