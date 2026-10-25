#include<bits/stdc++.h>
using namespace std;
int main() {

    //1. Number Hash Map
    /*int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //pre compute
    map<int, int> mp;
    for(int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    for(auto it : mp) {  //Auto iterator
        cout << it.first << "-->" << it.second << endl;
    }

    int q;
    cin >> q;
    while(q--) {
        int number;
        cin >> number;

        //Fetching
        cout << mp[number] << endl;
    }
    */

    //2. Character hash map
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //pre compute
    map<char, int> mp;
    for(int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    for(auto it : mp) {  //Auto iterator
        cout << it.first << "-->" << it.second << endl;
    }

    int q;
    cin >> q;
    while(q--) {
        int number;
        cin >> number;

        //Fetching
        cout << mp[number] << endl;
    }

}