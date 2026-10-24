#include<bits/stdc++.h>
using namespace std;

//Parameterized Recursion
void sumToN(int i, int sum) {  //Print sum of N numbers
    if(i < 1) {
        cout << sum << endl;
        return;
    }

    sumToN(i - 1, sum + i);
}

//Functional Recursion
int sumToN1(int n) {
    if( n == 0) {
        return 0;
    }
    return n + sumToN1(n - 1);
}

int fact(int n) { //Factorial of N
    if(n == 1) {
        return 1;
    }
    return n * fact(n - 1);
}

int main() {
    //sumToN(5, 0);
    //cout << sumToN1(3);

    cout << fact(5);
    return 0;
}