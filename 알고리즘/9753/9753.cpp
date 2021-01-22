#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v;	//100000값 받기
	vector<int>  v1; // 소수 넣기
	vector<int> multi; //소수 곱 넣기
	int T; // 케이스 값 넣기
	int K=0;
	for (int i = 0; i <= 50000; i++) {
		v.push_back(i);
	}
	for (int i = 2; i <= 50000; i++) {
		if (v[i] == 0) {
			continue;
		}
		else if (v[i] != 0) {
			v1.push_back(v[i]);
		}
		for (int j = 2; j * v[i] <= 50000; j++) {
			v[j * v[i]] = 0;
		}
	}	
	for (int i = 0; i < v1.size(); i++) {
		for (int j = i; j < v1.size(); j++) {
			if (i != j) {
				multi.push_back(v1[i] * v1[j]);
			}
		}
	}
	sort(multi.begin(), multi.end());
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> K;
		for (int j = 0; j < multi.size(); j++) {
			if (K <= multi[j]) {
				cout << multi[j] << '\n';
				break;
			}
		}
	}
}
