#include <iostream>
#include <queue>

using namespace std;

int main() {

	queue<int> q;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string C;
		cin >> C;
		//Push
		if (C == "push") {
			int n;
			cin >> n;
			q.push(n);			
		}
		//Pop
		else if (C == "pop") {
			if (q.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << q.front() << endl;
				q.pop();
			}
		}
		//Size
		else if (C == "size") {
			cout << q.size() <<endl;
		}
		//Empty
		else if (C == "empty") {
			if (q.empty()) {
				cout << 1 << endl;
			}
			else
				cout << 0 << endl;
		}
		//Front
		else if (C == "front") {
			if (q.empty()) {
				cout << "-1" << endl;
			}
			else
			cout << q.front() << endl;
		}
		//Back
		else {
			if (q.empty()) {
				cout << "-1" << endl;
			}
			else
				cout << q.back() << endl;
		}
	}
}