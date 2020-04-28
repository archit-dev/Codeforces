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
		for(int i=0;i<=1000;i++){
			for(int j=0;j<=1000;j++){
				if(pow(i,2)+j==m)
					if(pow(j,2)+i==n){
						count+=1;
					}
				}
			}
		cout<<count<<"\n";
    return 0;
} 
