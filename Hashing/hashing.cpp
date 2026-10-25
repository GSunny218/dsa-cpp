#include<bits/stdc++.h>
using namespace std;

int main() {
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
    int hash[13] = {0};
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

    return 0;
}