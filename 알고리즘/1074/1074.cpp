#include <iostream>
#include <algorithm>
using namespace std;

int result = 0;
int R[4][2] = { {0, 0 }, { 0, 1 }, { 1, 0 }, { 1, 1 } };
int r = 0;
int c = 0;

bool func(int num, int x, int y) {
	if (num == 2) {
		for (int i = 0; i < 4; i++) {
			int nextX = x + R[i][0];
			int nextY = y + R[i][1];
			if (r == nextX && c == nextY) {
				return true;

			}
			else
				result++;

		}
		return 0;
	}
	if (func(num / 2, x, y)) {
		return  true;
	}
	else if (func(num / 2, x, y + num / 2)) {
		return true;
	 }
	 
	else if (func(num / 2, x + num / 2, y)) {
		return true;
	}
	else if (func(num / 2, x + num / 2, y + num / 2) ) {
		return true;
	}
	 
}

int main() {
	int N = 0;	
	int size = 0;
	cin >> N;
	cin >> r;
	cin >> c;
	size = ((1 << N) *(1 << N)) -1;
	int x = 0;
	int y = 0;
	func(1 << N, x, y);
	cout << result;
	
}
