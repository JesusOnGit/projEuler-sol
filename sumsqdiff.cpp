#include <bits/stdc++.h>
 
using namespace std;
 
	int main(){	
 
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "a", stdout);
	#endif
 
    int n;
    cin >> n;

 	cout << abs(n*(2*n+1)*(n+1)/6 - (n*(n+1)/2)*(n*(n+1)/2)) << endl;

 
   	return 0;
	}