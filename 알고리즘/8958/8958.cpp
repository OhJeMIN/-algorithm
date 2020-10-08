#include <iostream>
#include <string.h>
using namespace std;

int main() {
	
	int N;
	string s;
	cin >> N;
	for (int i = 0; i < N ; i++) {
		cin >> s;
		int x = 0;
		int j = 0;
		for (int z = 0; z < s.length(); z++) {
			if (s[z] == 'O') {
				j++;
			}
			else {
				j = 0;
			}
				x += j;
			
		}
		cout << x<< endl;
		
	}

}