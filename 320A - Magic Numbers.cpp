#include <bits/stdc++.h>
#define ll long long 
#define ull unsigned long long  
#define pb push_back

using namespace std;
 
int main(){
 
		string s;
		cin>>s;
		bool isMagic=true;
		for(int i=1;i<s.size();i++){
			if((s[i]!='1')){
				if(s[i]!='4'){
					isMagic=false;
					break;
				}
			}
			if(i<=s.size()-2){
				if(s[i]=='4'){
				if(s[i+1] == '4' ){
					if( s[i+2]== '4'){
						isMagic=false;
						break;
					}
				}
			}
			}
		}
		if(s[0]!='1'){
			isMagic=false;
		}
		if(isMagic){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
    return 0;
} 
