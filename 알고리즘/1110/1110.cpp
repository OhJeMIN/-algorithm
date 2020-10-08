#include <iostream>
using namespace std;

int main() {
	int N,n;
	int a = 0;
	cin >> N;
	n = N;
		while (1) {
			a++;
			int sum,sum1;		
			if (n < 10) {
				sum = n;
				sum1 = n * 10 + sum;
				if (sum1 == N) {
					break;
				}
				else {
					n = sum1;
				}
				sum = 0;sum1 = 0;
				a++;
			}
			sum = n / 10 + n % 10;
			sum1 = (n - (n - (n % 10))) * 10 + (sum % 10);
			if (sum1 == N) {
				break;
			}
			else {
				n = sum1;
			}
			sum = 0;sum1 = 0;
		}
	cout << a;
}