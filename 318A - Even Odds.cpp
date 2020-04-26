#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <cmath>
#define ll long long int
#define ull unsigned long long int 
#define pb push_back


using namespace std;
 
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt","w",stdout);
	#endif
		ll n,k;
		cin>>n>>k;
		ll start=n-n/2+1;
		if(start<=k){
			cout<<2+(k-start)*2<<"\n";
		}
		else{
			cout<<2*k-1<<"\n";
		}
    return 0;

} 
