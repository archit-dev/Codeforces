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
		string s,rs,i;
		cin>>s;
		for(int i=s.size()-1;i>=0;i--){
			rs.pb(s[i]);
		}
		cin>>i;
		if(rs==i){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
    return 0;
} 
