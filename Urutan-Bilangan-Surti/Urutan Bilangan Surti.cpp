#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main(){
    ll n, ans; cin >> n;
    if(n % 2 == 0){
        ans = n/2;
        if((ans + 1) % 2 == 0)cout << 1 << endl;
        else cout << 0 << endl;
    }
    else{
        ans = n/2;
        if((ans + 1) % 2 == 0)cout << 0 << endl;
        else cout << 1 << endl;
    }
    
    return 0;
}