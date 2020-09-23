#include <iostream>
#include <stack>
#include <string.h>
using namespace std;

int main(void) {
	stack<string> st;

	char c[100];
	int a=0;
	while (1)
	{
		char ch;
		cin.get(ch);
		if (ch = '.')
			break;
		c[a] = ch;
		a++;
	}
	st.push(c);
	for (int i = 0; i < a; i++) {
		if (c[a] == ')' || c[a] == ']') {
			if (st.empty()) {
				cout << "no";
				return -1;
			}
		}
		if (c[a] == '(' && st.top == ')' || c[a] == '[' && st.top == ']') {
			st.pop();
		}
		if (c[a] == ".") {
			cout << "yes";
			return -1;
		}
	}
	cout << "yes";
	return 0;
}
