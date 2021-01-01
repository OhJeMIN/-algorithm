#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	stack<char> st;
	int N;
	cin >> N;
	int a = 0;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		st.push(s[0]);
		for (int j = 1; j < s.length(); j++) {
			if (!st.empty() && s[j] == st.top()) {
				st.pop();
			}
			else
				st.push(s[j]);
					}
		if (st.empty()) {
			a++;
		}	
		while (!st.empty()) { 
			st.pop();
		}
	}
	cout << a;
}