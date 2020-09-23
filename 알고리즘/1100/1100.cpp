#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	vector < vector <char> > v;
	vector<char> v1;
	for (int i = 0; i < 8; i++) {
		for (int k = 0; k < 8; k++) {
			char temp;
			cin >> temp;
			v1.push_back(temp);
		}
		v.push_back(v1);
		v1.clear();
	}
	
	int x = 0;
	for (int i = 0; i < 8; i++) 
	{
		if (i % 2 == 0) {
			for (int k = 0; k < 4;k++) {
				int p = 2*k;
					if (v[i][p] == 'F') {
						x = x + 1;
					}
			}
		}
		else {
			for (int k = 0; k < 4; k++) {
				int p = (2 * k)+1;
					if (v[i][p] == 'F') {
						x = x + 1;
					}
				
			}
		}
	}
	cout << x;
}