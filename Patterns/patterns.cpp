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

void printPattern12(int n) {
    int num = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            cout << num;
            num++;
        }
        cout << endl;
    }
    /*
    1
    23
    456
    78910
    */
}

void printPattern13(int n) {
    for(int i = 0 ; i < n; i++) {
        for(char ch = 'A'; ch <= 'A' + i; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
    /*
    A
    AB
    ABC
    ABCD
    ABCDE
    */
}

void printPattern14(int n) {
    for(int i = 0; i < n; i++) {
        for(char ch = 'A'; ch <= 'A' + n - i - 1; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
    /*
    ABCDE
    ABCD
    ABC
    AB
    A
    */
}

void printPattern15(int n) {
    for(int i = 0; i < n; i++) {
        char ch = 'A' + i;
        for(int j = 0; j <= i; j++) {
            cout << ch << " ";
        }
        cout << endl;
    }
    /*
    A
    B B
    C C C
    D D D D
    E E E E E
    */
}

void printPattern16(int n) {
    for(int i = 0; i < n; i++) {
        //space
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        //characters
        char ch = 'A';
        int breakPoint = (2 * i + 1) / 2;
        for(int k = 0; k < 2*i+1; k++) {
            cout << ch;
            if(k < breakPoint) {
                ch++;
            } else {
                ch--;
            }
        }
        //space
        for(int l = 0; l < n - i - 1; l++) {
            cout << " ";
        }
        cout << endl;
    }
    /*
        A    
       ABA   
      ABCBA  
     ABCDCBA 
    ABCDEDCBA
    */
}

void printPattern17(int n) {
    for(int i = 0; i < n; i++) {
        for(char ch = 'E'; ch >= 'E' - i; ch--) {
            cout << ch;
        }
        cout << endl;
    }
    /*
    E
    ED
    EDC
    EDCB
    EDCBA
    */
}

void printPattern18(int n) {
    int initSpace = 0;
    for(int i = 0; i < n; i++) {    //upper half
        //star
        for(int j = 0; j < n - i; j++) {
            cout << "*";
        }
        //space
        for(int k = 0; k < initSpace; k++) {
            cout << " ";
        }
        //star
        for(int l = 0; l < n - i; l++) {
            cout << "*";
        }
        if(i < n - 1) {
            cout << endl;
        }
        initSpace += 2;
    }
    initSpace = 2 * n;
    for(int i = 0; i < n + 1; i++) {
        //star
        for(int j = 0; j < i; j++) {
            cout << "*";
        }
        //space
        for(int k = 0; k < initSpace; k++) {
            cout << " ";
        }
        //star
        for(int l = 0; l < i; l++) {
            cout << "*";
        }
        cout << endl;
        initSpace -= 2;
    }
    /*
    **********
    ****  ****
    ***    ***
    **      **
    *        *
    *        *
    **      **
    ***    ***
    ****  ****
    **********
    */
}

void printPattern19(int n) {
    int space = 2 * n - 2;
    for(int i = 1; i <= 2 * n - 1; i++) {
        int star = i;
        if(i > n) {
            star = 2 * n - i;
        }
        //star
        for(int j = 1; j <= star; j++) {
            cout << "*";
        }
        //space
        for(int k = 1; k <= space; k++) {
            cout << " ";
        }
        //star
        for(int l = 1; l <= star; l++) {
            cout << "*";
        }
        cout << endl;
        if(i < n) {
            space -= 2;
        } else {
            space += 2;
        }
    }
    /*
    *        *
    **      **
    ***    ***
    ****  ****
    **********
    ****  ****
    ***    ***
    **      **
    *        *
    */
}

void printPattern20(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == 0 || j == 0 || i == n - 1 || j == n - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    /*
    ****
    *  *
    *  *
    ****
    */
}

void printPattern21(int n) {
    for(int i = 0; i < 2 * n - 1; i++) {
        for(int j = 0; j < 2 * n - 1; j++) {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int down = (2 * n - 2) - i;
            cout << (n - min(min(top, down), min(left, right)));
        }
        cout << endl;
    }
    /*
    555555555
    544444445
    543333345
    543222345
    543212345
    543222345
    543333345
    544444445
    555555555
    */
}

int main() {
    int n;
    cin >> n;
    printPattern21(n);
    return 0;
}