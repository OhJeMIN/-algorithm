#include <iostream>
#include <stack>
using namespace std;

int main() {
	int T = 0; //�Է� T���� �׽�Ʈ ������
	string PS; // �Է� ���� ���ڿ�
	stack<char> s; // �Էµ� ���ڿ� �ޱ�
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