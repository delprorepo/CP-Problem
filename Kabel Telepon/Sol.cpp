#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	int n;
	ll sum,x;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>x;
		if(x<2)
			cout<<"Kasus #"<<i+1<<": Tidak ada kabel!"<<endl;
		else {
			sum=(x*(x-1))/2;
			cout<<"Kasus #"<<i+1<<": "<<sum<<" kabel"<<endl;
		}
	}
	
	return 0;
}
