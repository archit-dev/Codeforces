//By archit-dev, contest: Codeforces Round #144 (Div. 2), problem: (A) Perfect Permutation, Accepted, #, Copy

#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <cmath>
#define ll long long int
#define ull unsigned long long int 
using namespace std;
 
bool prime(ll x){
	if(x==0||x==1){
		return false;
	}
	else if(x%2==0 && x!=2){
		return false;
	}
	else {
		for(int i=3;i<=sqrt(x);i+=2){
			if(x%i==0){
				return false;
			}
		}
	}
	return true;
}
 
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt","w",stdout);
	#endif
 int n;
 cin>>n;
 if(n%2!=0){
 	cout<<-1<<"\n";
 }
 else{
 	int z=2,o=1;
 	std::vector< int> v;
 	for(int i=0;i<n;i++){
 		if(i%2==0){
 			v.push_back(z);
 			z+=2;
 		}
 		else{
 			v.push_back(o);
 			o+=2;
 		}
 	}
 	for (int i = 0; i < n; ++i)
 	{
 		cout<<v.at(i)<< " ";
 	}
 	cout<<"\n";
}	
 
    return 0;
} 
 
