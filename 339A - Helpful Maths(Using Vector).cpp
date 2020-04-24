//By archit-dev, contest: Codeforces Round #197 (Div. 2), problem: (A) Helpful Maths, Accepted, #, Copy
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
	string s;
	cin>>s;
	std::vector<char> v;
	for(int i=0;i<s.size();i+=2){
		v.pb(s[i]);
	}
	sort(v.begin(),v.end());
	if(v.size()>1){
	for(int i=0;i<v.size();i++){
		cout<<v[i];
		if(i!=v.size()-1){
			cout<<"+";
		}
	}}
 
	else{
		cout<<v[0];
	}
	cout<<"\n";
    return 0;
}
