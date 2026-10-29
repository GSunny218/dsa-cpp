#include<bits/stdc++.h>
using namespace std;

/*void leftRotate(vector<int>& arr, int n, int d) {  //Brute - force approach
    d %= n;
    int temp[d];
    for(int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }
    for(int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }
    for(int i = n - d; i < n; i++) {
        arr[i] = temp[i - (n - d)];
    }
}*/

void leftRotate(vector<int>& arr, int n, int d) {  //Optimal approach
    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.begin() + n);
    reverse(arr.begin(), arr.begin() + n);
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int d;
    cin >> d;
    leftRotate(arr, n, d);
    for(auto it : arr) {
        cout << it << " ";
    }
    return 0;
}