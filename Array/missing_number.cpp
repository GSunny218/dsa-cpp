#include<bits/stdc++.h>
using namespace std;

/*int missingNum(vector<int>& arr, int n) {  //Brute-force approach
    for(int i = 1; i <= n; i++) {
        bool flag = 0;
        for(int j = 0; j < n; j++) {
            if(arr[j] == i) {
                flag = 1;
                break;
            }
        }
        if(!flag) {
            return i;
        }
    }
}*/

/*int missingNum(vector<int>& arr, int n) { //Better approach
    int hash[n] = {0};
    for(int i = 0; i < n; i++) {
        hash[arr[i]] = 1;
    }
    for(int i = 1; i <= n; i++) {
        if(hash[i] == 0) {
            return i;
        }
    }
}*/

/*int missingNum(vector<int>& arr, int n) {  //Not working
    int sum1 = (n * (n + 1)) / 2;
    int sum2 = 0;
    for(int& i : arr) {
        sum2 += i;
    }
    return sum2 - sum1;
}*/

int missingNum(vector<int>& arr, int n) {
    int xor1 = 0, xor2 = 0;
    int n2 = n - 1;
    for(int i = 0; i < n2; i++) {
        xor1 ^= (i + 1);
        xor2 ^= arr[i];
    }
    xor1 ^= n;
    return xor1 ^ xor2;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int& it : arr) {
        cin >> it;
    }
    cout << missingNum(arr, n);
    return 0;
}