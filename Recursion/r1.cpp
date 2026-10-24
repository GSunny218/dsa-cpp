#include<bits/stdc++.h>
using namespace std;
void print() {  //Runs infinite times
    cout << 1;
    print();
}

void print1(int count) {  //Runs infinite times and increments count by one.
    cout << count << endl;
    count++;
    print1(count);
}

void print2(int count) {  //Runs until the count is equals to 4.
    if(count == 4) {
        return;
    }
    cout << count << endl;
    count++;
    print2(count);
}

int main() {
    //print();
    int count  = 0;
    //print1(count);
    print2(count);
    return 0;
}