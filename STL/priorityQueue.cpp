#include<bits/stdc++.h>
using namespace std;
int main() {
    priority_queue<int> pq;   //is called as Max Heap, because greater values comes first 
    pq.push(5); //{5}
    pq.push(2); //{5, 2}
    pq.push(8); //{8, 5, 2}
    pq.emplace(10); //{10, 8, 5, 2}
    cout << pq.top() << endl;  //10
    pq.pop(); //{8, 5, 2}
    cout << pq.top() << endl; //8

    priority_queue<int, vector<int>, greater<int>> pq1;  //This is min heap, because small values comes first
    pq1.push(5); //{5}
    pq1.push(2); //{2, 5}
    pq1.push(8); //{2, 5, 8}
    pq1.emplace(10); //{2, 5, 8, 10}
    cout << pq1.top() << endl;  //2
}