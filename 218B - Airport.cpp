#include <bits/stdc++.h>

using namespace std;
 
int main(){
	int n,m;
	cin>>n>>m;
	priority_queue <int > max_heap;
	priority_queue <int , vector <int > , greater <int > > min_heap;
	for(int i=0;i<m;i++){
		int x;
		cin>>x;
		max_heap.push(x);
		min_heap.push(x);
	}
	int min=0,max=0;
	for(int i=0;i<n;i++){
		int num1=max_heap.top();
		max+=num1;
		max_heap.pop();
		if(num1-1>0)
			max_heap.push(num1-1);
		int num2=min_heap.top();
		min+=num2;
		min_heap.pop();
		if(num2-1>0)
			min_heap.push(num2-1);

	}
	cout<<max<<" "<<min<<"\n";
    return 0;
} 
