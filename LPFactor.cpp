#include <bits/stdc++.h>
 
using namespace std;
 
	int main(){	
 
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "a", stdout);
	#endif
 
    int a;
    cin >> a;
    
    while(a%2 == 0){
    	a /= 2;
    	cout << a << endl;
    }
 
   	return 0;
	}