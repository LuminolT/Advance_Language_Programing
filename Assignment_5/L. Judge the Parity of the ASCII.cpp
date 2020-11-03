#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	while (getline(cin,s)) {
		if (s[0] % 2 == 0)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
	return 0;
}