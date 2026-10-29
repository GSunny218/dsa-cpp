#include<bits/stdc++.h>
using namespace std;

/*vector<int> unionArray(vector<int>& arr1, vector<int>& arr2) {  //Brute Force Approach
    set<int> st;
    int n1 = arr1.size();
    int n2 = arr2.size();
    for(int i = 0; i < n1; i++) {
        st.insert(arr1[i]);
    }
    for(int i = 0; i < n2; i++) {
        st.insert(arr2[i]);
    }
    vector<int> temp;
    for(auto it : st) {
        temp.push_back(it);
    }
    return temp;
}*/

vector<int> unionArray(vector<int>& a, vector<int>& b) {  //Optimal Approach
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int> unionArr;
    while(i < n1 && j < n2) {
        if(a[i] <= b[j]) {
            if(unionArr.size() == 0 || unionArr.back() != a[i]) {
                unionArr.push_back(a[i]);
            }
            i++;
        } else {
            if(unionArr.size() == 0 || unionArr.back() != b[j]) {
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }
    while(j < n2) {
        if(unionArr.size() == 0 || unionArr.back() != b[j]) {
            unionArr.push_back(b[j]);
        }
        j++;
    }
    while(i < n1) {
        if(unionArr.size() == 0 || unionArr.back() != a[i]) {
            unionArr.push_back(a[i]);
        }
        i++;
    }
    return unionArr;
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
    vector<int> result = unionArray(arr1, arr2);
    for(auto it : result) {
        cout << it << " ";
    }
    return 0;
}