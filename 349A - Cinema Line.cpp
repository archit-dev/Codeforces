#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int ,int> MAP;
    MAP[25]=0;
    MAP[50]=0;
    MAP[100]=0;
    int i=1,x;
    int sum=0;
    cin>>x;
    MAP[x]+=1;
    if(x!=25){
        cout<<"NO\n";
    }
    else{
        sum+=x;
        for(i=1;i<n;i++){
            int y;
            cin>>y;
            MAP[y]+=1;
            if(y==25){
                sum+=y;
            }
            else if(y==50){
                if(y<=sum){
                    sum+=25;
                    if(!MAP[25]){
                        cout<<"NO\n";
                        break;
                    }
                    else{
                        MAP[25]-=1;
                    }
                }
                else{
                    cout<<"NO\n";
                    break;
                }
            }
            else{
                if(y<=sum){
                    sum+=75;
                    if(!MAP[50]){
                        if(MAP[25]<3){
                            cout<<"NO\n";
                            break;
                        }
                        else{
                            MAP[25]-=3;
                        }
                    }
                    else{
                        if(!MAP[25]){
                            cout<<"NO\n";
                            break;
                        }
                        else{
                            MAP[50]-=1;
                            MAP[25]-=1;
                        }
                    }
                }
                else{
                    cout<<"NO\n";
                    break;
                }
            }
        }
        if(i==n){
            cout<<"YES\n";
        }
    }
    
    return 0;
}
