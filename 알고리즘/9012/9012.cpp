#include <iostream>
#include <stack>
using namespace std;

int main() {
	int T = 0; //입력 T개의 테스트 데이터
	string PS; // 입력 받을 문자열
	stack<char> s; // 입력된 문자열 받기
	int a=1;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> PS;
		for (int i = 0; i < PS.size(); i++) {
			if (PS[i] == '(') {
				s.push(PS[i]);
			}
			else if (PS[i] == ')' && s.empty() == 1) {
				s.push(PS[i]);
			}
			else if (PS[i] == ')' && s.top() == '(') {
				s.pop();
			}			
			else {
				s.push(PS[i]);
			}
		}
		if (s.empty()) {
			cout << "YES" << "\n";
		}
		else {
			cout << "NO" << "\n";
		}
		while (!s.empty()) {
			s.pop();
		}
	}
}