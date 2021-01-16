#include <iostream>
#include <algorithm>
using namespace std;
int arr[101][100000];// 무게, 가치
int main(void) {
	
	int N, K; // N = 물품의 수 , K = 무게
	int W, V; // W = 무게 , V= 가치
	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		cin >> W >> V;
		for (int j = 0; j <= K; j++) {
			if (i == 0) {
				if (W > j) {
					arr[i][j] = 0;
				}
				else if (W <= j) {
					arr[i][j] = V;
				}
			}
			else {
				arr[i][j] = arr[i - 1][j];
				if (W <= j) {
					arr[i][j] = max(arr[i][j], V + arr[i - 1][j - W]);
				}
			}
		}
		W = 0;
		V = 0;
	}
	cout << arr[N-1][K] << endl;
}