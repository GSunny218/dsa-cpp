#include<bits/stdc++.h>
using namespace std;
//Multiple Recursion Calls

int nFibonacci(int n) {
    if(n <= 1) {
        return n;
    }
    return nFibonacci(n - 1) + nFibonacci(n - 2);
}

int main() {
    cout << nFibonacci(7);
    return 0;
}