#include <bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col;
    char cake[row][col];
    set<int> s1,s2;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>cake[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(cake[i][j]=='S'){
                s1.insert(i);
                s2.insert(j);
            }
        }
    }
    cout<<row*col-s1.size()*s2.size()<<"\n";
    return 0;
}
