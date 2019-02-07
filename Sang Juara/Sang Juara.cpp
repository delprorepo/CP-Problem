#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,d,x, temp;
	
	cin>>a>>b>>c;
	
	x=(a+b+c)/7;
	temp=x*4;
	
	if(temp==a){
		cout<<"YA"<<endl;
	}
	else if(temp==b){
		cout<<"YA"<<endl;
	}
	else if(temp==c){
		cout<<"YA"<<endl;
	}
	else{
		cout<<"TIDAK"<<endl;
	}
	
	return 0;
}

