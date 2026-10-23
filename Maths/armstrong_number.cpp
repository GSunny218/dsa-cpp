#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, last_num, rev_num, sum = 0;
    cin >> n;
    int dupli_num = n;
    int no_of_digit = (int) log10(n) + 1; //number of digit
    while(n > 0) {
        last_num = n % 10;
        sum = sum + pow(last_num, no_of_digit);  //sum + last_num ^ no_of_digit
        rev_num = (rev_num * 10) + last_num;
        n /= 10;
    }
    if(dupli_num == sum) {
        cout << "It's an armstrong number";
    } else {
        cout << "It's not an armstrong number";
    }
    return 0;
}