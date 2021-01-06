#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
	vector <int> v;
	int A;
	cin >> A;
	for (int i = 0; i < A; i++) {
		int B;
		cin >> B;
		v.push_back(B);
	}
	stack<int> s;
	vector<string> result;	
	int k1 = 0;
	for (int k = 1; k <= A; k++) {
		s.push(k);
		result.push_back("+");
		while (!s.empty()) {			
			if (v[k1] != s.top()) {
				break;
			}
			else {
				s.pop();
				result.push_back("-");
				k1++;
			}
		}
	}
	if (s.empty()) {
		for (int c = 0; c < result.size(); c++) {
			cout << result[c] << '\n';
		}
	}
	else {
		cout << "NO";
	}
}