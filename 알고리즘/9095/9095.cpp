#include <iostream>
using namespace std;
int C = 0;
int num;

void func(int T) {
	if (T > num) {
		return;
	}
	else if (T == num) {
		C += 1;
		return;
	}
	else {
		func(T + 1);
		func(T + 2);
		func(T + 3);
	}
}

int main() {
	int n;	
	cin >> n;
	for (int i = 0; i < n; i++) {
		C = 0;
		cin >> num;	
		func(0);
		cout << C << '\n';
		
	}
}