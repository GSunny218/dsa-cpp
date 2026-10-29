#include<bits/stdc++.h>
using namespace std;

void findSecondLargest(vector<int>& arr) {
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if(secondLargest == INT_MIN) {
        cout << "No second largest element found." << endl;
    } else {
        cout << "The second largest element is: " << secondLargest << endl;
    }
}

void findSecondSmallest(vector<int>& arr) {
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if(arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    if(secondSmallest == INT_MAX) {
        cout << "No second smallest element found." << endl;
    } else {
        cout << "The second smallest element is: " << secondSmallest << endl;
    }
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    findSecondLargest(arr);
    findSecondSmallest(arr);
    return 0;
}