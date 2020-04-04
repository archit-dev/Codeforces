//By archit-dev, contest: Codeforces Beta Round #32 (Div. 2, Codeforces format), problem: (B) Borze, Accepted, #, Copy
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

char chara(string a)
{
	if(a=="."){
		return '0';
	}
	else if(a=="-."){
		return '1';
	}
	else if(a=="--"){
		return '2';
	}
	else{
		return '8';
	}
}
int main(){
	string s1(""),s2(""),s3("");
	cin>>s1;
	for(int i=0;i<s1.size();i++){
		s2=s2+s1[i];
		if(chara(s2)!='8'){
			s3=s3+chara(s2);
			s2="";
		}
	}
	cout<<s3<<endl;
	return 0;
}
