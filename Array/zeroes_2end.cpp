#include<bits/stdc++.h>
using namespace std;

/*vector<int> moveZeroes(int n, vector<int>& arr) {  //Brtue-force approach
    vector<int> temp;
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            temp.push_back(arr[i]);
        }
    }
    int nz = temp.size();
    for(int i = 0; i < nz; i++) {
        arr[i] = temp[i];
    }
    for(int i = nz; i < n; i++) {
        arr[i] = 0;
    }
    return arr;
}*/

vector<int> moveZeroes(int n, vector<int>& arr) {  //Brtue-force approach
    int j = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            j = i;
            break;
        }
    }
    if(j == -1) {
        return arr;
    }
    for(int i = j + 1; i < n; i++) {
        if(arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    return arr;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    moveZeroes(n, arr);
    for(int it : arr) {
        cout << it << " ";
    }
    return 0;
}