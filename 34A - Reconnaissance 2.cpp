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
		int n,min=INT_MAX;
		cin>>n;
		std::vector<int> v;
		std::vector<int> v2;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin>>x;
			v.pb(x);
		}
		if(abs(v[n-1]-v[0])<min){
			min=abs(v[n-1]-v[0]);
			v2.pb(1);
			v2.pb(n);
		}
		if(abs(v[1]-v[0])<min){
			min=abs(v[1]-v[0]);
			v2.clear();
			v2.pb(2);
			v2.pb(1);
		}
		for(int i=1;i<n-1;i++){
			int left=abs(v[i+1]-v[i]);
			int right =abs(v[i-1]-v[i]);
			if(left<min){
				min=left;
				v2.clear();
				v2.pb(i+2);
				v2.pb(i+1);

			}
			if(right<min){
				min=right;
				v2.clear();
				v2.pb(i+1);
				v2.pb(i+2);
			}
		}
		for(int i=0;i<v2.size();i++){
			cout<<v2[i]<<" ";
		}
		cout<<"\n";
    return 0;

} 
