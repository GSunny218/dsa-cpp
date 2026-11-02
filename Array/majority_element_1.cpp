#include<bits/stdc++.h>
using namespace std;

/*int majorityElement(vector<int>& arr) { //Brute Force Solution
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        int cnt = 0;
        for(int j = 0; j < n; j++) {
            if(arr[j] == arr[i]) {
                cnt++;
            }
        }
        if(cnt > n / 2) {
            return arr[i];
        }
    }
    return -1;
}*/

/*int majorityElement(vector<int>& arr) {  //Better solution
    map<int, int> mp;
    for(int i = 0; i < arr.size(); i++) {
        mp[arr[i]]++;
    }
    for(auto it : mp) {
        if(it.second > (arr.size() / 2)) {
            return it.first;
        }
    }
    return -1;
}*/

int majorityElement(vector<int>& arr) {
    int cnt = 0;
    int el;
    for(int i = 0; i < arr.size(); i++) {
        if(cnt == 0) {
            cnt = 1;
            el = arr[i];
        } else if(arr[i] == el) {
            cnt++;
        } else {
            cnt--;
        }
    }
    int cnt1 = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == el) {
            cnt1++;
        }
    }
    if(cnt1 > (arr.size() / 2)) {
        return el;
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int& i : arr) {
        cin >> i;
    }
    cout << majorityElement(arr);
    return 0;
}