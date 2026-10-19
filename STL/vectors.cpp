#include<bits/stdc++.h>
using namespace std;
int main() {

    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    //Output: 1 2

    //Pair in vector
    vector<pair<int, int>> v1;
    v1.push_back({1, 2});  //pushes in v1 vector pair but we have to take curly braces
    v1.emplace_back(3, 4);  //pushes in v1 vector pair but we don't take curly braces in emplace back in function

    ///Containers
    vector<int> v2(5, 100);   // = {100, 100, 100, 100, 100}  Five indexes are assigned as 100 value.
    vector<int> v3(5);  // = {0, 0, 0, 0, 0}  Five indexes are assigned as garbage values.
    vector<int> v4(5, 20);   // = {20, 20, 20, 20, 20}  Five indexes are assigned as 20 value.
    vector<int> v5(v4); // Copy of v4;
}