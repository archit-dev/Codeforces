#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll x1,x2,y1,y2,x_req,y_req,t,t_req=0,i=0,east=0,west=0,north=0,south=0;
    string directions;
    bool possible =true;
    cin>>t>>x1>>y1>>x2>>y2;
    cin.ignore();
    cin>>directions;
    x_req=x2-x1;
    y_req=y2-y1;
    if(x_req<0){
        west=abs(x_req)*1;
    }
    else if(x_req>0){
        east=abs(x_req)*1;
    }
    if(y_req<0){
        south=abs(y_req)*1;
    }
    else if(y_req>0){
        north=abs(y_req)*1;
    }
    while(true){
        if(directions[i]=='E'){
            if(east!=0){
                east-=1;
            }
        }
        else if(directions[i]=='W'){
            if(west!=0){
                west-=1;
            }
        }
        else if(directions[i]=='N'){
            if(north!=0){
                north-=1;
            }
        }
        else if(directions[i]=='S'){
            if(south!=0){
                south-=1;
            }
        }
        i+=1;
        t_req+=1;
        if(t_req>t){
            possible=false;
            break;
        }
        if(east==0 && west==0 && north==0 && south==0){
            break;
        }
    }
    if(possible){
        cout<<t_req<<"\n";
    }
    else {
        cout<<"-1\n";
    }
    return 0;
}
