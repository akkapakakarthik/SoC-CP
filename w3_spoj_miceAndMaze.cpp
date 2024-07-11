#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,e,t,m;
    cin >> n >> e >> t >> m;
	long dp[n][n];
	memset(dp, 100100, sizeof(dp[0][0])*n*n);
	while(m--){
		int a, b, c;
		cin >> a >> b >> c;
		dp[a-1][b-1] = c;
	}
		for(int i = 0;i < n; i++){
			dp[i][i] = 0;
		}
		for(int k = 0;k < n; k++){
			for(int i = 0;i < n; i++){
				for(int j = 0;j < n; j++){
					if(dp[i][j] > dp[i][k] + dp[k][j]){
						dp[i][j] = dp[i][k] + dp[k][j];
					}
				}
			}
		}
		int count = 0;
		for(int i = 0;i < n; i++){
			if(dp[i][e-1] <= t)
				count++;
		}
		cout << count << endl;
}