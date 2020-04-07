//By archit-dev, contest: Codeforces Round #141 (Div. 2), problem: (A) Is your horseshoe on the other hoof?, Accepted, #, Copy

#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
 
void quick_sort(int a[],int l,int u);
int partition(int a[],int l,int u);
 
int main(){
	int s1,s2,s3,s4,count=0;
	cin>>s1>>s2>>s3>>s4;
	int arr[4]={s1,s2,s3,s4};
	quick_sort(arr,0,3);
	for(int i=0;i<3;i++){
		if(arr[i]==arr[i+1]){
			count+=1;
		}
	}
	cout<<count<<"\n";
	return 0;	
}	
 
void quick_sort(int a[],int l,int u)
{
    int j;
    if(l<u)
    {
        j=partition(a,l,u);
        quick_sort(a,l,j-1);
        quick_sort(a,j+1,u);
    }
}
 
int partition(int a[],int l,int u)
{
    int v,i,j,temp;
    v=a[l];
    i=l;
    j=u+1;
    
    do
    {
        do
            i++;
            
        while(a[i]<v&&i<=u);
        
        do
            j--;
        while(v<a[j]);
        
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);
    
    a[l]=a[j];
    a[j]=v;
    
    return(j);
}
