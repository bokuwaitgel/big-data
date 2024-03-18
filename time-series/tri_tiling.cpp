#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int dp[31];
	memset(dp,0,sizeof(dp));
	dp[0]=1;
	dp[2]=3;
	
	
	for (int i=4;i<31;i+=2){
		dp[i]=dp[i-2]*4 - dp[i-4];
	}
	
	while(true){
		int n;
		cin >> n;
		
		if(n == -1){
			break;
		}
		if(n%2==1){
			cout << 0 << endl;
		}
		else{
			cout << dp[n] << endl;
		}
	}
	
	
	
	return 0;
}
