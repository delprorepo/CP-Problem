#include<bits/stdc++.h>

using namespace std;

int main(){
	
	string X[27] = {"ei","bi","si","di","i","ef","dei","eitf","ai","djei","kei","el","em","en","ou","pi","kiu","ar","es","ti","ju","vi","dabelju","eks","wai","zi"};
	
	string s;
	
	getline(cin,s);
	
	for(int i=0; i<s.size(); i++){
		if(s[i]>=65 && s[i]<=90){
			cout << X[s[i]-'A'];
		}else{
			cout << s[i];
		}
	}
	
	cout << endl;

	return 0;
}
