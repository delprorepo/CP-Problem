#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, counter;
	scanf("%d", &n);
	char mda[n+1][n+1];

    for(int i = 0; i < n; i++){
        scanf("%s",mda[i]);
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			counter = 0;
			if(mda[i][j] == 'O'){
                if(mda[i-1][j-1]!= 'X')
                    counter++;
                if(mda[i-1][j] != 'X')
                    counter++;
                if(mda[i-1][j+1] != 'X')
                    counter++;
                if(mda[i][j-1] != 'X')
                    counter++;
                if(mda[i][j+1] != 'X')
                    counter++;
                if(mda[i+1][j-1] != 'X')
                    counter++;
                if(mda[i+1][j] != 'X')
                    counter++;
                if(mda[i+1][j+1] != 'X')
                    counter++;
                mda[i][j] = (char)(counter + '0');
            }
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%c", mda[i][j]);
		}
		printf("\n");
	}
	return 0;
}
