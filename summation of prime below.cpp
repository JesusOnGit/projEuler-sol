	#include <bits/stdc++.h>
 
	using namespace std;
 
	// bool isPrime(int n){
	// 	if (n == 1) return false ;
	// 	for (int i = 2; i*i <= n; ++i)
	// 	{
	// 		if(n%i == 0){
	// 			return false ;
	// 			break ;
	// 		} 
	// 	}
	// 	return true ;
	// }


	int main(){	
 
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "a", stdout);
	#endif
 
    long long n {};
    cin >> n ;
    int64_t sum {0};
	
	vector<bool> isPrime(n+1 , true);
	isPrime[0] = isPrime[1] = false ;
	for (long long i = 2; i*i <= n; ++i)
	{
		if(isPrime[i] && i*i <= n){
			for (long long j = i * i; j <= n; j += i)
			{
				isPrime[j] = 0 ;
			}
		}
	}
    
    for(long long i = 0 ; i <= n ; i++){
    	if(isPrime[i]){
    		sum += i;
    	}
    }
    cout << sum << endl;

   	return 0;
	}