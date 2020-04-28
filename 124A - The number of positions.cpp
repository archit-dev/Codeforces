#include <bits/stdc++.h>
#define ll long long 
#define ull unsigned long long  
#define pb push_back

using namespace std;

void print( vector<char> &v){
	for(int i=0;i<v.size();i++){
		cout<<v[i];
	}
}
 
int main(){
	std::ios_base::sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt","w",stdout);
	#endif
		ll int n,a,b;
		cin>>n>>a>>b;
		cout<<n-max(a+1,n-b)+1<<"\n";
    return 0;
} 
