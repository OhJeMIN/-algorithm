#include <iostream>
#include <map>
using namespace std;

int main() {

	int n, m;
	cin >> n >> m;
	int num = 1;
	map<int, string> E1;
	map<string, int > E2;
	for (int i = 0; i < n; i++) {
		string name;
		cin >> name;
		E1.insert(pair<int, string>(num, name));
		E2.insert(pair<string,int>(name, num++));
	}
	
	for (int i = 0; i < m; i++) {
		char question[20];
		cin >> question;
		if (question[0] < 'A') 
		{
			int num1 = atoi(question);
			cout << E1[num1]<< endl;
		}
		else
		{
			cout << E2[question] << endl;
		}
	}
}