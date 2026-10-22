#include<bits/stdc++.h>
using namespace std;
int main() {
    set<int> st; //Set contains sorted(Ascending Order) and unique elements.
    st.insert(1);  //{1}
    st.emplace(2); //{1, 2}
    st.insert(2); //{1, 2}
    st.insert(4); //{1, 2, 4}
    st.insert(3); //{1, 2, 3, 4}
    //begin(), end(), rbegin(), rend(), size(), empty() and swap() are same as well.

    auto it = st.find(3);  //This function takes a key and tries to locate the element with which the key matches. If successful the function returns an iterator pointing to the sought after element. If unsuccessful it returns the past-the-end ( end() ) iterator.
    auto it = st.find(6);  //Unsuccessful

    st.erase(3); //Erases the element

    int cnt = st.count(1);  //Returns 1 if element present else 0.

    auto it = st.find(4);
    st.erase(it);

    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2);  //erases {2, 4}

    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);
    //lower-bound() and upper_bound() works in the same way as in vector it does.
    return 0;
}