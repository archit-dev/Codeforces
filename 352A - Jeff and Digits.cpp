//By archit-dev, contest: Codeforces Round #204 (Div. 2), problem: (A) Jeff and Digits, Accepted, #, Copy

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
		int n,sum=0,n_five=0;
		cin>>n;
		std::vector<char> str;
		bool isZero=false;
		for(int i=0;i<n;i++){
			char x;
			cin>>x;
			str.push_back(x);
			if(str[i]=='0'){
				isZero=true;
			}
			if(str[i]=='5'){
				n_five+=1;
			}
			sum+=(int)x-48;
		}
		if (!isZero){
			cout<<"-1\n";
		}
		else if(n_five<9){
			cout<<"0\n";
		}
		else{
			sort(str.begin(),str.end());
			while(sum%45!=0){
				sum-=(int)str.back()-48;
				str.pop_back();
			}
			sort(str.rbegin(),str.rend());
			for(int i=0;i<str.size();i++){
				cout<<str[i];
			}
			cout<<"\n";
		}
 
    return 0;
 
} 
