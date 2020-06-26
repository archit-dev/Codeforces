#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <map>

using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

    int n;
    cin>>n;
    string s,newstring("");
    cin>>s;
    newstring=s;
    if(s.size()%2==0){
    	int pos = s.size()/2;
    	bool before=true;
    	int j=1,k=0;
    	for(int i=0;i<s.size();i++){
    		if(before){
    			before=false;
    			newstring[pos-j]=s[i];
    			j+=1;
    		}
    		else{
    			before=true;
    			newstring[pos+k]=s[i];
    			k+=1;
    		}
    	}
    }
    else{
    	int pos = s.size()/2;
    	bool before=true;
    	int cycle=0,k=1;
    	newstring[pos]=s[0];
    	for(int i=1;i<s.size();i++){
    		if(before){
    			before=false;
    			newstring[pos-k]=s[i];
    			cycle+=1;
    		}
    		else{
    			before=true;
    			newstring[pos+k]=s[i];
    			cycle+=1;
    		}
    		if(cycle==2){
    			cycle=0;
    			k+=1;
    		}
    	}
    }
    cout<<newstring<<endl;
	return 0;
}
