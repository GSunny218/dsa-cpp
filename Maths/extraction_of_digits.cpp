#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;  //Let input: 7789
    int last_digit;
    while(n > 0) {
        last_digit = n % 10;
        cout << n <<  endl;
        n /= 10;
    }
    return 0;
    /*
    Output;
    7789
    778
    77
    7
    */
}