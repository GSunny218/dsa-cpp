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
        for(int j = 0; j < n - i - 1; j++) {  //left space
            cout << " ";
        }
        for(int k = 0; k < i * 2 + 1; k++) {  //stars
            cout << "*";
        }
        for(int l = 0; l < n - i - 1; l++) {  //right space
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

void printPattern8(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {  //left space
            cout << " ";
        }
        for(int k = 0; k < 2 * n - (2 * i + 1); k++) {
            cout << "*";
        }
        for(int l  = 0; l < i; l++) {
            cout << " ";
        }
        cout << endl;
    }
    /*
    *********
     ******* 
      *****  
       ***   
        *    
    */
}

void printPattern9(int n) {
    for(int i = 0; i < 2 * n; i++) {
        int stars = i;
        if(i > n) {    //Checks if the row is greater than n, then it will start decreasing the number of stars
            stars = 2 * n - i;
        }
        for(int j = 0; j < stars; j++) {
            cout << "*";
        }
        cout << endl;
    }
    /*
    *
    **
    ***
    ****
    *****
    ****
    ***
    **
    *
    */
}

void printPattern10(int n) {
    int start = 1;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            start = 1;
        } else {
            start = 0;
        }
        for(int j = 0; j < i; j++) {
            cout << start;
            start = 1 - start;  //Toggles between 0 and 1
        }
        cout << endl;
    }
    /*
    0
    10
    010
    1010
    */
}

void printPattern11(int n) {
    int space = 2 * (n - 1);
    for(int i = 1; i <= n; i++) {
        //numbers
        for(int j = 1; j <= i; j++) {
            cout << j;
        }
        //spaces
        for(int k = 1; k <= space; k++) {
            cout << " ";
        }
        //numbers
        for(int l = i; l >= 1; l--) {
            cout << l;
        }
        cout << endl;
        space -= 2;
    }
    /*
    1        1
    12      21
    123    321
    1234  4321
    1234554321
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
    //printPattern7(n);
    //printPattern8(n);
    //printPattern9(n);
    //printPattern10(n);
    printPattern11(n);
    return 0;
}