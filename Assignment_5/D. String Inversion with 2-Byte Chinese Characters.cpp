#include <bits/stdc++.h>
using namespace std;

int main() {
	int count = 0;
	string s,temp;
	stack<string> st;
 	while (getline(cin, s)) {
		printf("Case %d: ", ++count);
		for (int i = 0; i < s.length(); i++) {
			if (s[i] < 0) {
				temp.append(1,s[i]);
				temp.append(1,s[i + 1]);
				st.push(temp);
				temp.clear();
				i++;
			}
			else {
				temp.append(1,s[i]);
				st.push(temp);
				temp.clear();
			}
		}
		cout << "\"";
		while (st.size() != 0) {
			cout << st.top();
			st.pop();
		}
		cout << "\"" << endl;
	}
	return 0;
}