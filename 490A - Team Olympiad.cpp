//By archit-dev, contest: Codeforces Round #279 (Div. 2), problem: (A) Team Olympiad, Accepted, #, Copy

#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
 
int main(){
  int n,ti,p=0,m=0,pe=0;
  cin>>n;
  int stud[n];
  for(int i=0;i<n;i++){
        cin>>ti;
        stud[i]=ti;
        if(ti==1){
            p+=1;
        }
        else if(ti==2){
            m+=1;
        }
        else{
            pe+=1;
         }
    }
    int teams=min(p,min(pe,m));
    cout<<teams<<endl;
    while(teams!=0){
        int f1=0,f2=0,f3=0,i=0;
        for(int i=0;i<n;i++){
            if(stud[i]==1&&f1==0){
                cout<<i+1<<" ";
                stud[i]=-1;
                f1=1;
            }
            if(stud[i]==2&&f2==0){
                cout<<i+1<<" ";
                stud[i]=-1;
                f2=1;
            }
            if(stud[i]==3&&f3==0){
                cout<<i+1<<" ";
                stud[i]=-1;
                f3=1;
            }
        }
        cout<<"\n";
        teams--;
    }
  
  return 0; 
} 
