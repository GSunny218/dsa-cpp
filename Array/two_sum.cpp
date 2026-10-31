#include<bits/stdc++.h>
using namespace std;

/*vector<int> twoSum(vector<int>& arr, int target) {  //Brute-force approach
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                return {i, j};
            }
        }
    }
    return {-1, -1}
}*/

/*string readTwoSum(int n, vector<int>& arr, int target) {  //Better solution. Variation 1. Returns Yes or No
    map<int, int> mp;
    for(int i = 0; i < n; i++) {
        int a = arr[i];
        int more = target - a;
        if(mp.find(more) != mp.end()) {
            return "Yes";
        }
        mp[a] = i;
    }
    return "No";
}*/

/*vector<int> twoSum(vector<int> nums, int target) { //Another Better Solution. Variation 2. Returns two indexes.
    map<int, int> mp;
    int n = nums.size();
    for(int i = 0; i < n; i++) {
        int num = nums[i];
        int moreNeeded = target - num;
        if(mp.find(moreNeeded) != mp.end()) {
            return {mp[moreNeeded], i};
        }
        mp[num] = i;
    }
    return {-1, -1};
}*/

string readTwoSum(int n, vector<int>& arr, int target) {  //Optimal solution. Variation 1. Returns Yes or No
    int left = 0, right = n - 1;
    sort(arr.begin(), arr.end());
    while(left < right) {
        int sum = arr[left] + arr[right];
        if(sum == target) {
            return "Yes";
        } else if(sum < target) {
            left++;
        } else {
            right--;
        }
    }
    return "No";
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int& i : arr) {
        cin >> i;
    }
    int target;
    cin >> target;

    /*vector<int> result = twoSum(arr, target);  //For brute force
    for(auto& it : result) {
        cout << it << " ";
    }*/

    //cout << readTwoSum(n, arr, target);  //For Better solution

    /*vector<int> result = twoSum(arr, target);  //For Better force
    for(auto& it : result) {
        cout << it << " ";
    }*/

    cout << readTwoSum(n, arr, target);  //For Optimal solution

    return 0;
}