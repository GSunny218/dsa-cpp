#include<bits/stdc++.h>
using namespace std;
int main() {
    multiset<int> ms; //stores sorted but maybe duplicate elements.
    ms.insert(1); //{1}
    ms.insert(1); //{1, 1}
    ms.insert(1); //{1, 1, 1}

    ms.erase(1);  //erases all 1's

    int cnt = ms.count(1);

    ms.erase(ms.find(1));

    //ms.erase(ms.find(1), ms.find(1)+2);
    //rest all functions same as set.
    return 0;
}