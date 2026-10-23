#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, last_digit, rev_num = 0;
    cin >> n;
    while(n > 0) {
        last_digit = n % 10;
        rev_num = (rev_num * 10) + last_digit;
        n /= 10;
    }
    cout << rev_num;
    return 0;
    //Input: 7789, Output: 9877
}