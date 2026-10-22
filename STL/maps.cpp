#include<bits/stdc++.h>
using namespace std;
int main() {
    map<int, int> mp1;  //Maps has unique keys but can have duplicate values. Keys are stores in sorted order.
    map<int, pair<int, int>> mp2;
    map<pair<int, int>, int> mp3;

    //For mp1
    mp1[1] = 2;  //Key = 1, value = 2
    mp1.emplace(3, 1);
    mp1.insert({2, 4});

    //For mp3
    mp3[{2, 3}] = 10; //Key = {2, 3}, values = 10.
    for(auto it : mp3) {
        cout << it.first.first << " " << it.first.second << " " << it.second << endl;
    }
    cout << mp3[1] << endl; //If key is not present, it will create a new key with default value 0.
    cout << mp3[{2, 3}] << endl; //If key is present, it will return the value.

    auto it = mp1.find(2); //Finds the key 2 in the map and returns an iterator to it.
    cout << *it.second << endl; //Dereferencing the iterator to get the value of key 2.

    auto it = mp1.find(5); //returns mp1.end() means index of after the last element.

    auto it = mp1.lower_bound(2);
    auto it = mp1.upper_bound(3);
    //erase, swap, size, empty are same as well

    //Multi Map
    //Stores duplicate key and in sorted order.
    //Example: {1, 2} = 10, {1, 3} = 20.

    //Unordered map
    //Stored unique key but not in sorted order.
    return 0;
}

void comp(pair<int, int> p1, pair<int, int> p2) {
    if(p1.second < p2.second) {
        return true;
    } else if(p1.second == p2.second) {
        if(p1.first > p2.second) {
            return true;
        }
    }
    return false;
}

void extra() {
    sort(a, a + n); //For array. a = starting iterator, a + n = ending iterator
    sort(v.begin(), v.end()); //For vectors

    sort(a + 2, a + 4); //Sort element from index 2 to 4(excluded), i.e., 2 to 3
    // example: {1, 3, 5, 2} Here 5 and 2 will sort. Output: {1, 3, 2, 5}

    sort(a, a + n, greater<int>);  //Sort in Descending order. a = starting iterator, a + n = ending iterator, greater<int> is in-build comparator

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
    //sort it according to second element
    //if second element is same, then sort it according to first element in descending.
    sort(a, a + n, comp); //comp is self-written comparator. It's a boolean function.

    int num = 7;
    int cnt = __builtin_popcount();  //Return how many 1s(binary) are there in a number(set bit). Here 7 has 3

    long long num1 = 165786578687;
    int cnt = __builtin_popcount();

    string s = "123";
    do {
        cout << s << endl;
    } while(next_permutation(s.begin(), s.end()));  //Print all permuatation of string "123"

    int maxi = *max_element(a, a + n);  //Returns maximum element in array. example: {1, 10, 4, 9}. Output: 10.
}