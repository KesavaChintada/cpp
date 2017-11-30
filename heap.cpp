#include <bits/stdc++.h>

using namespace std;
int a[10]
static int n=4;

rec(int b){
	if(a[b]<a[2*b]){
		a[b]=a[b]+a[2*b];
		a[2*b]=a[b]-a[2*b];
		a[b]=a[b]-a[2*b];
	}
	if(a[b]<a[2*b+1]){
		a[b]=a[b]+a[2*b+1];
		a[2*b+1]=a[b]-a[2*b+1];
		a[b]=a[b]-a[2*b+1];
	}
	if(b==1)
		return (b);

	else{
		rec(b/2);
	}
}
int main(){


	cout<<"enter digits\n";

	for(int i=1;i<9;i++){
		cin>>a[i];
	}
	rec(n);

	cout<<"the largest digit is"<<a[n];
}

