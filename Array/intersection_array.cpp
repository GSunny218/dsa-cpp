#include<bits/stdc++.h>
using namespace std;

/*vector<int> intersectionArray(vector<int>& a, int m, vector<int>& b, int n) {  //Brute Force Approach
    vector<int> ans;
    int vis[n] = {0};
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i] == b[j] && vis[j] == 0) {
                ans.push_back(a[i]);
                vis[j] = 1;
                break;
            }
            if(b[j] > a[i]) {
                break;
            }
        } 
    }
    return ans;
}*/

vector<int> intersectionArray(vector<int>& a, int m, vector<int>& b, int n) {  //Optimal Approach
    vector<int> ans;
    int i = 0;
    int j = 0;
    while(i < m && j < n) {
        if(a[i] < b[j]) {
            i++;
        } else if(b[j] < a[i]) {
            j++;
        } else {
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;
}

int main() {
    int n1;  //For first array
    cin >> n1;
    vector<int> arr1(n1);
    for(int& it : arr1) {
        cin >> it;
    }
    int n2;  //For second array
    cin >> n2;
    vector<int> arr2(n2);
    for(int& it : arr2) {
        cin >> it;
    }
    vector<int> result = intersectionArray(arr1, n1, arr2, n2);
    for(auto it : result) {
        cout << it << " ";
    }
    return 0;
}