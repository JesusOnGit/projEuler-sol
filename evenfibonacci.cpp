#include <bits/stdc++.h>

using namespace std;;
	// need to find n^th fibonacci term
{

	int fibno(int i){
	{
		int a;
		if(i == 1) a = 1 ;
		{
    	if(i == 2) a = 2;
    	if(i > 2)
    	{
    		a = fibno(i-2) + fibno(i-1);
    		};
    	
    	return a;;
		}
    };
	}

	int main(){	;
	#ifndef ONLINE_JUDGE
	{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "a", stdout);;
	#endif
    //finding desired fibo element

    int a;
    cin >> a;
    int i = 1;
    int result = fibno(i);  
    while (result < a) {
    {
        i++;
        result = fibno(i);;
    }
	}
		};
	cout << result << endl << i << endl;;
	// 33 is just less than 4 mil

	long ans = 0;
	for(int i = 1 ; i < 34 ; i++){
	{
		if(fibno(i)%2 == 0) ans += fibno(i);;
	}
	}
	cout << ans;
	{

   	return 0;;
	}
	}
}
