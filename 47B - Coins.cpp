#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <map>

using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

    map<int,char> v;
    v['A']=0;
    v['B']=0;
    v['C']=0;
    string s;
    cin>>s;
    if(s[1]=='>'){
    	v[s[0]]+=1;
    }
    else{
    	v[s[2]]+=1;
    }
    cin>>s;
    if(s[1]=='>'){
    	v[s[0]]+=1;
    }
    else{
    	v[s[2]]+=1;
    }
    cin>>s;
    if(s[1]=='>'){
    	v[s[0]]+=1;
    }
    else{
    	v[s[2]]+=1;
    }
    
    bool ans=true;
    if(v['A']==v['B'] || v['A']==v['C'] ||v['B']==v['C']){
    	ans=false;
    }
    if(ans){
    	string s1,s2,s3;
    	if(v['A']==2){
    		s1.push_back('A');
    	}
    	else if(v['B']==2){
			s1.push_back('B');	
    	}
    	else{
    		s1.push_back('C');
    	}
    	if(v['A']==1){
    		s2.push_back('A');
    	}
    	else if(v['B']==1){
			s2.push_back('B');	
    	}
    	else{
    		s2.push_back('C');
    	}
    	if(v['A']==0){
    		s3.push_back('A');
    	}
    	else if(v['B']==0){
			s3.push_back('B');	
    	}
    	else{
    		s3.push_back('C');
    	}
    	cout<<s3<<s2<<s1<<endl;
    }
    else{
    	cout<<"Impossible\n";
    }
	return 0;
}
