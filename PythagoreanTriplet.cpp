	#include <bits/stdc++.h>
 
	using namespace std;
 
	int main(){	
 
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "a", stdout);
	#endif
 
    for (int i = 1; i < 1000; ++i)
    {
    	for (int j = i; j < 1000; ++j)
    	{
    		if (sqrt(i*i + j*j) == 1000 - i - j)
    		{
    			cout << i << " " << j << " " << 1000-i-j << endl;
    			cout << 200*375*425 ;
    		}
    	}
    }
 
   	return 0;
	}