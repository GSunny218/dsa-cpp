#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, last_digit, dup_num, rev_num = 0;
    cin >> n;
    dup_num = n;
    while(n > 0) {
        last_digit = n % 10;
        rev_num = rev_num * 10 + last_digit;
        n /= 10;
    }
    if(dup_num == rev_num) {
        cout << "It's the Palindrome number";
    } else {
        cout << "It's not the Palindrome number";
    }
}