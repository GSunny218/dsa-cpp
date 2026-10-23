#include<bits/stdc++.h>
using namespace std;
//Prime number means exactly 2 factors 1 & itself.
int main() {
    int n, count = 0;
    cin >> n;
    /*for(int i = 1; i <= n; i++) {  //Brute Force approach  TC: O(N)
        if(n % i == 0) {
            count++;
        }
    }
    if(count == 2) {
        cout << "It's a prime number";
    } else {
        cout << "It's not a prime number";
    }*/
    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            count++;
            if(n / i != i) {
                count++;
            }
        }
    }
    if(count == 2) {
        cout << "It's a prime number";
    } else {
        cout << "It's not a prime number";
    }
    return 0;
}