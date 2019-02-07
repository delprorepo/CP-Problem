#include<bits/stdc++.h>
using namespace std;
vector<int> kata;
map<char,int> cek;
int main(){
    string s;
    cin>>s;
    for(int i = 0 ; i < s.size();i++){
        cek[s[i]]++;
        if(cek[s[i]]==1){
            kata.push_back(s[i]);
        }
    }
    for(int i = 0 ; i < kata.size() ;i++){
        cout<<(char)kata[i]<<" = "<<cek[kata[i]]<<endl;

    }
    return 0;
}
