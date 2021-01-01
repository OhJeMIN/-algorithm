#include <iostream>
using namespace std;
int ar[41];

int A = 0;
int B = 0;

int fibonacci(int n) {
	if (n == 0) {		
		ar[0] = 0;
		return 0;
	}
	else if (n == 1) {		
		ar[1] = 1;
		return 1;
	}
	else if (ar[n] != 0) {
		return ar[n];
	}
	else {
		return ar[n] = fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int main() {	
	
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;
		if (N == 0) {
			cout << 1 << ' ' << 0 << '\n';
		}		
		else {
			fibonacci(N);
			cout << ar[N - 1]<< ' ' <<  ar[N] << '\n';
		}
	}
	
}