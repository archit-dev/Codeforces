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
    ll n,m;
    cin>>n>>m;
    ll diff=m-n,num=n+=1;
    bool chk=true;
    for(int i=1;i<diff;i++){
    	if(prime(num)){
    		chk=false;
    		break;
    	}
    	num+=1;
    }
    if(chk){
    	if(!prime(m)){
    		chk=false;
    	}
    }
    if(chk){
    	cout<<"YES\n";
    }
    else{
    	cout<<"NO\n";
    }
    return 0;
} 
