#include <iostream>
#include <algorithm>
using namespace std;
int arr[1001];
int dp[1001] = { 1, };
int main() {	
	fill_n(dp, 1000, 1);
	int A;
	int ai;
	int k = 0;
	int count = 1;
	cin >> A;
	for (int i = 0; i < A; i++) {		
		cin >> ai;
		arr[i] = ai;
	}
	
	for (int i = 0; i < A; i++) {
		for(int k = 0; k < i; k++) {
			if (arr[i] > arr[k]) {
				dp[i] = dp[k] + 1;
				if (count < dp[i]) {
					count = dp[i];
				}
			}			
		}
		dp[i] = count;	
		count = 1;
	}
	int result = 0;
	for (int i = 0; i < A; i++) {
		if (dp[i] > result) {
			result = dp[i];
		}
	}
	cout << result << '\n';
}