#include<bits/stdc++.h>
using namespace std;
int main() {
	int count = 0;
	string s, x;
	stringstream ss;
	stack<string> st;
	while (getline(cin, s)) {
		printf("Case %d: ", ++count);
		ss.clear();
		ss << s;
		while (ss >> x) {
			st.push(x);
		}
		while (st.size() != 0) {
			if (st.size() != 1) {
				cout << st.top() << " ";
				st.pop();
			}
			else {
				cout << st.top();
				st.pop();
			}
		}
		cout << endl;
	}
	return 0;
}