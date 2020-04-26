#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int 
#define pb push_back

using namespace std;
 
int main(){
	std::ios_base::sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt","w",stdout);
	#endif
		int d,n,m,a,change=0;
		cin>>d;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a;
			if(i!=n-1){
				change+=(d-a);
			}
		}
		cout<<change<<"\n";
    return 0;
} 
