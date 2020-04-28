#include <bits/stdc++.h>
#define ll long long 
#define ull unsigned long long  
#define pb push_back

using namespace std;
bool sortbysec( pair<int,int> &a,  pair<int,int> &b) 
{ 
    return (a.second < b.second); 
} 
int main(){
	std::ios_base::sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt","w",stdout);
	#endif
		int s,n;
		cin>>s>>n;
		pair <int ,int > p;
		vector< pair<int ,int > > v;
		bool yes=true;
		for(int i=0;i<n;i++){
			int x,y;
			cin>>x>>y;
			p = make_pair(x,y);
			
			v.pb(p);
		}
		sort(v.begin(),v.end());
		int c=0;
		for(int i=0;i<n;i++){
			// cout<<v[i].first<<" "<<v[i].second<<endl;
			if(v[i].first>=s){
				yes=false;
				break;
			}
			s+=v[i].second;
		}
		// cout<<c;
		if(yes){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
    return 0;
} 
