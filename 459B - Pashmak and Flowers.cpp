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
 		ll int n;
 		cin>>n;
 		vector <int > v;
 		for(int i=0;i<n;i++){
 			int x;
 			cin>>x;
 			v.pb(x);
 		}
 		sort(v.begin(),v.end());
 		ll int low=v[0],low_num=0,high=v[n-1],high_num=0,minus,prod;
 		for(int i=0;i<n;i++){
 			if(v[i]==low){
 				low_num+=1;
 			}
 			if(v[i]==high){
 				high_num+=1;
 			}
 		}
 		minus=high-low;
 		if(high!=low){
 		prod=high_num*low_num;}
 		else{
 			prod=(low_num*(low_num-1))/2;
 		}
 		cout<<minus<<" "<<prod<<"\n";
    return 0;
} 
