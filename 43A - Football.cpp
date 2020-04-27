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
		string last="A",s,other;
		int n;
		cin>>n;
		pair< int ,int> p (0,0);
		cin>>s;
		last=s;
		p.first+=1;
		n-=1;
		while(n--){
			cin>>s;
			if(s!=last){
				p.second+=1;
				other=s;
			}
			else{
				p.first+=1;
			}
		}
		if(p.first>p.second){
			cout<<last<<endl;
		}
		else{
			cout<<other<<endl;
		}
    return 0;
} 
