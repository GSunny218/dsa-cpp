#include<bits/stdc++.h>
using namespace std;

vector<int> leftRotate(vector<int>& arr) {
    int temp = arr[0];
    int n = arr.size();
    for(int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
    return arr;
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    leftRotate(arr);
    for(auto it : arr) {
        cout << it << " ";
    }
}