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
		ll int n,m,curr=1,mi,steps=0;
		cin>>n>>m;
		for(ll int i=0;i<m;i++){
			cin>>mi;
			if(mi>=curr){
				steps+=abs(mi-curr);
				curr=mi;
			}
			else{
				steps+=abs(n+mi-curr);
				curr=mi;
			}
		}
		cout<<steps<<"\n";
    return 0;
} 
