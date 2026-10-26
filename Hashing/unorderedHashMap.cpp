#include<bits/stdc++.h>
using namespace std;

int main() {
    //1. Number
    /*int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> ump;
    for(int i = 0; i < n; i++) {
        ump[arr[i]]++;
    }

    for(auto it : ump) {
        cout << it.first << "-->" << it.second << endl;
    }

    int q;
    cin >> q;
    while(q--) {
        int num;
        cin >> num;

        //Fetchiing
        cout << ump[num];
    }
    */

    //2.Character unordered map
    string s;
    cin >> s;

    //pre compute
    unordered_map<char, int> ump;
    for(char i = 0; i < s.size(); i++) {
        ump[s[i]]++;
    }

    for(auto it : ump) {  //Auto iterator
        cout << it.first << "-->" << it.second << endl;
    }

    int q;
    cin >> q;
    while(q--) {
        char number;
        cin >> number;

        //Fetching
        cout << ump[number] << endl;
    }
    return 0;
}