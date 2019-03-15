/*
	Author	: Gerald Sihotang
	geshtng.github.io
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, lmao,j;
	
	cin>>n;
	int i=0;
	while(true){
		lmao = pow(2,i);
		i++;
		if(lmao==n){
			break;
		}
	}
		
	cout<<i-1<<endl;
	
	return 0;
}
