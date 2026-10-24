#include<bits/stdc++.h>
using namespace std;

void rev_arr(int l, int r, int arr[]) {  //Swapping with two pointers
    if(l >= r) {
        return;
    }
    swap(arr[l], arr[r]);
    rev_arr(l+1, r-1, arr);
}

void rev_arr1(int i, int n, int arr[]) { //Swapping with single pointer
    if(i >= n / 2) {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    rev_arr1(i+1, n, arr);
}

bool isPalindrome(int i, string s) {
    if(i >= s.size() / 2) {
        return true;
    }
    if(s[i] != s[s.size() - i - 1]) {
        return false;
    }
    return isPalindrome(i + 1, s);
}

int main() {
    // int arr[] = {1, 3, 2, 5, 4};
    // int n = sizeof(arr) / sizeof(arr[0]);

    //rev_arr(0, n - 1, arr);

    // rev_arr1(0, n, arr);

    // for(int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }

    cout << isPalindrome(0, "madm");
    return 0;
}