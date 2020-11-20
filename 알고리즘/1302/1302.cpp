#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int a;
	vector<string> v;
	cin >> a;
	for (int i = 0; i < a; i++) {
		string temp;
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());
	int max = 0;
	int pos  = 0;
	//aaa bbbb ccc
 	for (int i = 0; i < v.size(); i++) {
		int s = count(v.begin(), v.end(), v[i]);
		if (max < s) {
			max = s;
			pos = i;
		}
	}
	cout << v[pos];
} 