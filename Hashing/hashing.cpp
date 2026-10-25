#include<bits/stdc++.h>
using namespace std;
//int hash[10000000];  //10^7 globally
int main() {

    //Number Hashing
    /*
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    cout << endl;
    int arr[n];
    cout << "Enter elements of array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << endl;

    //pre compute
    int hash[1000000] = {0};  //10^6 inside main
    for(int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cout << "Enter number to run the loop: ";
    cin >> q;
    cout << endl;
    while(q--) {
        int num;
        cin >> num;  //Enter number you want to see how many times it appeared...
        cout << endl;
        //Fetching
        cout << hash[num] << endl;  //Number appeared this many times.
    }
    */

    //Character Hashing
    string s;
    cin >> s;

    //pre compute
    //int hash[26] = {0};  //26 beacause aplhabets are 26. Only for lower case characters
    int hash[256] = {0}; //For both upper and lower case
    for(int i = 0; i < s.size(); i++) {

        //hash[s[i] - 'a']++;  //Subtracting every character with 'a' and getting ASCII. Only for lower case characters

        hash[s[i]]++; //For both upper and lower case
    }
    
    int q;
    cin >> q; //Number of queries
    while(q--) {
        char c;
        cin >> c;

        //Fetching
        //cout << hash[c - 'a'] << endl;  //Only for lower case characters
    
        cout << hash[c] << endl; //For both upper and lower case
    }
    return 0;
}