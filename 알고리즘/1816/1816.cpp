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
	vector<int> result;
	int a = 0;
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
		cin >> num;
		for (int i = 0; i <= num; i++) {
			while (num != 1) {
				if (num % v1[i] == 0) {
					num /= v1[i];
					result.push_back(v1[i]);
				}
			}
		}
		for (int j = 0; j < result.size(); j++) {
			if (result[j] > 1000000) {
				a++;
			}
		}
		if (a == result.size()) {
			cout << "YES" << '\n';
		}
		else{
			cout << "NO" << '\n';
		}

		a = 0;
		num = 0;
		result.clear();
	}
}

