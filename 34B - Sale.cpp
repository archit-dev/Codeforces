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
		int n,m,count=0;
		cin>>n>>m;
		std::vector<int > v;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			v.pb(x);
		}
		sort(v.begin(),v.end());
		for(int i=0;i<m;i++){
			if(v[i]<=0)
				count+=-1*v[i];
		}
		cout<<count<<"\n";
    return 0;
} 
