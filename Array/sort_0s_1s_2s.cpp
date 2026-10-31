#include<bits/stdc++.h>
using namespace std;

/*vector<int> sortArray(vector<int>& arr, int n) {  //Better solution
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            cnt0++;
        } else if(arr[i] == 1) {
            cnt1++;
        } else {
            cnt2++;
        }
    }
    for(int i = 0; i < cnt0; i++) {
        arr[i] = 0;
    }
    for(int i = cnt0; i < cnt0 + cnt1; i++) {
        arr[i] = 1;
    }
    for(int i = cnt0 + cnt1; i < n; i++) {
        arr[i] = 2;
    }
    return arr;
}*/

vector<int> sortArray(vector<int>& arr, int n) {  //Optimal solution using "Dutch National Flag Algorithm"
    int low = 0, mid = 0, high = n - 1;
    while(mid <= high) {
        if(arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if(arr[mid] == 1) {
            mid++;
        } else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    return arr;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int& i : arr) {
        cin >> i;
    }
    vector<int> result = sortArray(arr, n);
    for(int& i : result) {
        cout << i << " ";
    }
    return 0;
}