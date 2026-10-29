#include<bits/stdc++.h>
using namespace std;

int removeDuplicate(vector<int>& arr) {
    int i = 0;
    for(int j = 0; j < arr.size(); j++) {
        if(arr[i] != arr[j]) {
            arr[i + 1] = arr[j];
            i++;
            continue;
        }
    }
    return i + 1;
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << removeDuplicate(arr) << endl;;
    for(int i = 0; i < removeDuplicate(arr); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}