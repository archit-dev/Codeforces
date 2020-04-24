#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <cmath>
#define ll long long int
#define ull unsigned long long int 
using namespace std;
 
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt","w",stdout);
	#endif
	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	int s1_and_s2[26]={0},s3_[26]={0};
	for(int i=0;i<s1.size();i++){
		s1_and_s2[s1[i]-65]+=1;
	}
	for(int i=0;i<s2.size();i++){
		s1_and_s2[s2[i]-65]+=1;
	}
	for(int i=0;i<s3.size();i++){
		s3_[s3[i]-65]+=1;
	}
	if(s1.size()+s2.size()==s3.size()){
		bool flag=true;
		for(int i=0;i<26;i++){
			if(s1_and_s2[i]!=s3_[i]){
				flag=false;
				break;
			}
		}
		if(flag){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	else{
		cout<<"NO\n";
	}
    return 0;
} 
