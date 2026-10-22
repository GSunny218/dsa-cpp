#include<bits/stdc++.h>
using namespace std;
int main() {
    list<int> ls = {1, 2, 3, 4, 5};
    ls.push_back(6);  //{1, 2, 3, 4, 5, 6}
    ls.emplace_back(7); //{1, 2, 3, 4, 5, 6, 7}
    ls.push_front(0); //{0, 1, 2, 3, 4, 5, 6, 7}
    ls.emplace_front(-1);  //{-1, 0, 1, 2, 3, 4, 5, 6, 7}
    //Rest functions are same as vector
    //begin, end, rbegin, rend, clear, insert, size, swap, etc.
    return 0;
}