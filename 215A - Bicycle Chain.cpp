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
		int n,m;
		cin>>n;
		vector <int >a;
		vector <int > b;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			a.pb(x);
		}
		cin>>m;
		for(int i=0;i<m;i++){
			int x;
			cin>>x;
			b.pb(x);
		}
		vector <int > max;
		for(int i=0;i<b.size();i++){
			for(int j=0;j<a.size();j++){
				if(b[i]%a[j]==0){
					int gear=b[i]/a[j];
					max.pb(gear);
				}
			}
		}
		int count=1;
		sort(max.rbegin(),max.rend());
		int maxx=max[0];
		for(int i=1;i<max.size();i++){
			if(maxx==max[i]){
				count+=1;
			}
		}
		cout<<count<<endl;
    return 0;
} 
