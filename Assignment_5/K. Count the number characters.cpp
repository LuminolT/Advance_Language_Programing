#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	int n = 0;
	while (getline(cin, s)) {
		n = 0;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] >= '0' and s[i] <= '9')
				n++;
		}
		cout << n << endl;
	}
	return 0;
}