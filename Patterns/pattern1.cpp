#include<iostream>
using namespace std;
void printPattern1(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)  {
            cout << "*";
        }
        cout << endl;
    }
    /*
    ****
    ****
    ****
    ****
    */
}

void printPattern2(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++)  {
            cout << "*";
        }
        cout << endl;
    }
    /*
    *
    **
    ***
    ****
    */
}

void printPattern3(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++)  {
            cout << j;
        }
        cout << endl;
    }
    /*
    1
    12
    123
    1234
    */
}

void printPattern4(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }
    /*
    1
    22
    333
    4444
    */
}

void printPattern5(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = n; j >= i; j--) {
            cout << "*";
        }
        cout << endl;
    }
    /*
    ****
    ***
    **
    *
    */
}

void printPattern6(int n) {
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
    /*
    1234
    123
    12
    1
    */
}

void printPattern7(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        for(int k = 0; k < i * 2 + 1; k++) {
            cout << "*";
        }
        for(int l = 0; l < n - i - 1; l++) {
            cout << " ";
        }
        cout << endl;
    }
    /*
        *    
       ***   
      *****  
     ******* 
    *********
    */
}

int main() {
    int n;
    cin >> n;
    //printPattern1(n);
    //printPattern2(n);
    //printPattern3(n);
    //printPattern4(n);
    //printPattern5(n);
    //printPattern6(n);
    printPattern7(n);
    return 0;
}