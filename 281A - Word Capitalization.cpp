//By archit-dev, contest: Codeforces Round #172 (Div. 2), problem: (A) Word Capitalization, Accepted, #, Copy
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
 
int main(){
      string s;
      cin>>s;
      if(s[0]>=97){
        s[0]=s[0]-32;
      }
      cout<<s<<"\n";
    return 0;
} 
