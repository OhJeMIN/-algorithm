#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {	
	int n;
	cin >> n;
	long long num;
	vector<int> v;
	vector<int>  v1;
	const int MAX = 1e6 + 1;
	for (int i = 0; i <= MAX; i++) {
		v.push_back(i);
	}
	for (int i = 2; i <= MAX; i++) {
		if (v[i] == 0) {
			continue;
		}
		else if (v[i] != 0) {
			v1.push_back(v[i]);
		}
		for (int j = 2; j * v[i] <= MAX; j++) {
			v[j * v[i]] = 0;
		}
	}

	for(int k = 0; k < n; k++){
		bool flag = true;
		cin >> num;
		for (int i = 0; i < v1.size(); i++) {				
				if (num % v1[i] == 0) {
					cout << "NO" << '\n';
					flag = false;// 여기 범위내에서 하나 나눠짐 표시
					break;
				}
		}
		if (flag) {
			cout << "YES" << '\n';
		}
		a = 0;
		num = 0;
		
	}
}

