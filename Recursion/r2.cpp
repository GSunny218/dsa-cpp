#include<bits/stdc++.h>
using namespace std;
void printNTimes(int i, int n) { //Print name N times. TC: O(N), SC: O(N)
    cout << "Sunny" << endl;
    //i++;
    if(i > n) {
        return;
    }
    //printNTimes(i++, n); //Goes in infinite loop
    //printNTimes(i+=1, n);
    printNTimes(i+1, n);
}

int n1 = 10;
void printN() {  //Print N to 1
    cout << n1 << endl;
    n1--;
    if(n1 == 0) {
        return;
    }
    printN();
}

void backtrack(int i, int n) {  //Print 1 to N
    if(i < 1) {
        return;
    }
    backtrack(i - 1, n);
    cout << i << endl;
}

void backtrack1(int i, int n) {  //Print N to 1
    if(i > n) {
        return;
    }
    backtrack1(i + 1, n);
    cout << i << endl;
}

int main() {
    //printNTimes(1, 5);
    //printN();

    //Backtracking
    //backtrack(10, 10);
    backtrack1(1, 10);
    return 0;
}