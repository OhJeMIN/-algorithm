#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	vector<char> v;
	stack<char> s;
	int answer = 0;
	int a = 1;
	string input;
	cin >> input;

	for (int i = 0; i < input.size(); i++) {
		v.push_back(input[i]);
	}	
	for(int k =0 ; k < v.size(); k++){
		if (v[k] == '(') {
			s.push(v[k]);
		}
		else if (v[k] == ')' && v[k - 1] == '(') {
			s.pop();
			answer += s.size();
		}
		else {
			answer += 1;
			s.pop();
		}
	}
	cout << answer;
}