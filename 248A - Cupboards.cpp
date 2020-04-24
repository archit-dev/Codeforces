//By archit-dev, contest: Codeforces Round #152 (Div. 2), problem: (A) Cupboards, Accepted, #, Copy
	
  #include <bits/stdc++.h>
	#include <string>
	#include <algorithm>
	#include <cmath>
	#define ll long long int
	#define ull unsigned long long int 
	using namespace std;
	 
	int main(){
		int n;
		cin>>n;
		int ld[n],rd[n];
		for(int i=0;i<n;i++){
			cin>>ld[i];
			cin>>rd[i];
		}
		int ld_zero=0,rd_zero=0,ld_one=0,rd_one=0;
		for(int i=0;i<n;i++){
			if(ld[i]==0){
				ld_zero+=1;
			}
			else{
				ld_one+=1;
			}
			if(rd[i]==0){
				rd_zero+=1;
			}
			else{
				rd_one+=1;
			}
		}
		int l_req=1,r_req=1;
		if(ld_zero>ld_one){
			l_req=0;
		}
		if(rd_zero>rd_one){
			r_req=0;
		}
		int min=0;
		for(int i=0;i<n;i++){
			if(ld[i]!=l_req){
				min+=1;
			}
			if(rd[i]!=r_req){
				min+=1;
			}
		}
		cout<<min<<endl;
	    return 0;
	} 
