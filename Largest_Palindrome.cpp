#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n) {
    string str = to_string(n);
    string rev_str = str;
    reverse(rev_str.begin(), rev_str.end());
    return str == rev_str;
}

int main() {
    int number = 1000;

    bool found = false;
    for (int i = number; i > 9; i--) {
        for (int j = i; j > 9; j--) {
            int product = i * j;
            if (isPalindrome(product)) {
                cout << i << " " << j << " " << product << endl;  
                found = true;
            }
        }
    }
    return 0;
}
