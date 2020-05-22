#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map <int,int> Map;
    for(int i=1;i<=7;i++){
        Map.insert(make_pair(i,0));
    }
    for(int i=0,x;i<n;i++){
        cin>>x;
        Map[x]+=1;
    }
    bool flag=true;
    
    if(Map[5]!=0 || Map[7]!=0){
        flag=false;
    }
    if(Map[4]==0&&Map[6]==0){
        flag=false;
    }
    if(Map[1]!=n/3){
        flag=false;
    } 
    if(Map[2]<Map[4]){
        flag=false;
    }
    if(Map[6]!=0){
        int rem_two=Map[2]-Map[4];
        if(rem_two+Map[3]!=Map[6]){
            flag=false;
        }
        if(Map[3]>Map[6]){
            flag=false;
        }
    }
    if(flag==false){
        cout<<"-1\n";
    }
    else{
        while(Map[4]!=0){
            if(Map[1]>=1&&Map[2]>=1){
                cout<<"1 2 4\n";
                Map[4]-=1;Map[2]-=1;Map[1]-=1;
            }
            else{
                cout<<"-1\n";
                break;
            }
        }
        
        while(Map[6]!=0){
            if(Map[1]>=1&&Map[3]>=1){
                cout<<"1 3 6\n";
                Map[6]-=1;Map[3]-=1;Map[1]-=1;
            }
            else if(Map[1]>=1&&Map[2]>=1){
                cout<<"1 2 6\n";
                Map[6]-=1;Map[2]-=1;Map[1]-=1;
            }
            else{
                cout<<"-1\n";
                break;
            }
        }
    }
    return 0;
}
