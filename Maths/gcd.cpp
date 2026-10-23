#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    while(a > 0 && b > 0) { //Eulidean Algorithm. TC: O(log(Phi)min(a, b))
        if(a > b) {
            a %= b;
        } else {
            b %= a;
        }
    }
    if(a == 0) {
        cout << b;
    } else {
        cout << a;
    }
    return 0;
}