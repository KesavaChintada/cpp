#include <bits/stdc++.h>
#include <dos.h>

using namespace std;

int i=0;


void result(){
	system("CLS");
	cout<<"finished loading(^_^)!";
}


void load(int i){

	
	while(i<15){

		cout<<"loading!";
		int j=0,k=0;
		while(j<i){
			cout<<"*";
			j++;
		}
		while(k<100000000){
				k++;
			}
		i++;
        system("CLS");

	}

	if(i==15)
	{
		result();
	}
}

main(){
     load(1);
}