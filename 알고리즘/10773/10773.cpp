#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<int> s;
	int a;
	int b;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> b;
		int c = b;
		s.push(c);
		if (b == 0) {
			s.pop();
			s.pop();
		}	
		c = 0;
	}	
	int sum = 0;
	int k = s.size();
		for (int i = 0; i < k; i++) {
			sum += s.top();
			s.pop();
	}
	cout << sum;
}
