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
		int n;
		cin>>n;
		std::vector<int> v;
		std::vector<int> v1;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			v.push_back(x);
			v1.push_back(v[i]);
		}
		sort(v1.begin(),v1.end());
		int min=v1[0];
		bool oneCity=true;
		for (int i = 1; i < n; i++)
		{
			if(v1[i]==min){
				oneCity=false;
				break;
			}
		}
		if(!oneCity){
			cout<<"Still Rozdil\n";
		}
		else{
			int i;
			for( i =0;i<n;i++){
				if(min==v[i]){
					break;
				}
			}
			cout<<i+1<<"\n";
		}
    return 0;

} 
