#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    /*for(int i = 1; i <= n; i++) {   //Time complexity: O(N)
        if(n % i == 0) {
            cout << i << " ";
        }
    }*/
    // Another way
    vector<int> ls;
                   //i * i <= n
    for(int i = 1; i <= sqrt(n); i++) {  //Time complexity: O(sqrt(N))
        if(n % i == 0) {
            ls.push_back(i);
            if(n / i != i) {
                ls.push_back(n / i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for(auto it : ls) {
        cout << it << " ";
    }
    return 0;
}