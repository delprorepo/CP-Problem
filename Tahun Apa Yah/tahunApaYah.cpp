// 1924 <= n

#include<bits/stdc++.h>
using namespace std;

string shio[14] = {
    "Tikus",
    "Kerbau",
    "Macan",
    "Kelinci",
    "Naga",
    "Ular",
    "Kuda",
    "Kambing",
    "Monyet",
    "Ayam",
    "Anjing",
    "Babi"
};

string checkYear(int x){
    int temp = x % 1924;
    
    return shio[temp % 12];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;
    for(int i = 0; i < n; i++){
        int x;

        cin >> x;
        if(x < 1924){
            cout << "Gak tau ah\n";
        }else{
            cout << "Tahun ini tahun " << checkYear(x) << endl;
        }   
    }

    return 0;
}