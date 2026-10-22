#include<bits/stdc++.h>
using namespace std;
int main() {
    stack<int> st;
    st.push(1); //{1}
    st.push(2); //{2, 1}
    st.push(3); //{3, 2, 1}
    st.emplace(4); //{4, 3, 2, 1}
    cout << st.top() << endl;  //4
    st.pop();  //{3, 2, 1}
    cout << st.top() << endl; //3
    cout << st.size() << endl; //3
    cout << st.empty() << endl;  //0 i.e., False
    stack<int> st1;
    st1.swap(st);
    return 0;
}