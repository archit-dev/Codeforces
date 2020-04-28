#include <bits/stdc++.h>
#define ll long long 
#define ull unsigned long long  
#define pb push_back

using namespace std;

int main(){
	std::ios_base::sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt","w",stdout);
	#endif
		int n;
		cin>>n;
		cout<<n;
		int i=1;
		while(i<n){
			cout<<" "<<i;
			i+=1;
		}
    return 0;
} 
