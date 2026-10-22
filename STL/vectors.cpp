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

    vector<int> v6 = {1, 2, 3, 4, 5, 6};
    //Accessing vector elements using iterators and reverse iterators
    vector<int>::iterator it = v6.begin();
    cout << *it << endl;  //Output: 1
    it++;
    cout << *it << endl;  //Output: 2
    it+=2;
    cout << *it << endl;  //Output: 4
    vector<int>::iterator it1 = v6.end();  //end() points to the next index of last index
    cout << *it1 << endl;  //Output: 6
    vector<int>::reverse_iterator rit = v6.rend();  //rend() points to the next index of first index
    cout << *rit << endl;  //Output: 1
    vector<int>::reverse_iterator rit1 = v6.rbegin();  //rbegin() points to the last index of vector
    cout << *rit1 << endl;  //Output: 6

    cout << v6[0] << " " << v6.at(0) << endl;
    cout << v6.front() << " " << v6.back() << endl;

    //Accessing vector elements using iterators and reverse iterators with for loop
    for(vector<int>::iterator it  = v6.begin(); it != v6.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    for(vector<int>::reverse_iterator it  = v6.rbegin(); it != v6.rend(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    //Using auto keyword to access vector elements
    for(auto it = v6.begin(); it != v6.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    for(auto it : v6) {
        cout << it << " ";
    }
    cout << endl;

    //Erasing elements from vector(deleting elements from vector)
    vector<int> v7 = {10, 20, 30, 40, 50, 60};
    v7.erase(v7.begin() + 1); //Erases the element at index 1
    for(auto it : v7) {
        cout << it << " ";  //Output: 10 30 40 50 60
    }
    cout << endl;

    vector<int> v8 = {10, 20, 30, 40, 50, 60};
    v8.erase(v8.begin() + 2, v8.begin() + 4); //Erases the elements at indices 2 and 3
    for(auto it : v8) {
        cout << it << " ";  //Output: 10 20 50 60
    }
    cout << endl;


    //Inserting elements in vector
    vector<int>v9(2, 100);  //{100, 100}
    v9.insert(v9.begin(), 300); //Inserts 300 at the beginning of the vector //{300, 100, 100}
    v9.insert(v9.begin() + 1, 2, 10); //Inserts two 10s at index 1 and 2 //{300, 10, 10, 100, 100}

    //Inserting elements of one vector into another vector
    vector<int> copy(2, 700); //{700, 700}
    v9.insert(v9.begin(), copy.begin(), copy.end()); //Inserts the elements of copy vector at the beginning of v9 vector //{700, 700, 300, 10, 10, 100, 100}

    v9.size();  //Returns the size of the vector

    v9.pop_back();  //Removes the last element of the vector

    v9.swap(v8); //Swaps the contents of v9 and v8 vectors
    
    v9.clear(); //Clears the vector, making it empty

    cout << v9.empty(); //Returns True if vector is empty else False
}