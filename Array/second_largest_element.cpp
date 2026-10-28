#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int sLargest = -1;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] > sLargest && arr[i] != sLargest) {
            sLargest = arr[i];
        }
    }
    cout << sLargest << endl;
    return 0;
}