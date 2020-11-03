//#include<bits/stdc++.h>
//using namespace std;
//const int N = 10000;
//int ary[N];
//int main() {
//	int count = 0;
//	int i = 0;
//	string s;
//	while (true) {
//		scanf_s("%d", &ary[i]);
//		i++;
//		if(i == 1)
//			printf("Case %d: ", ++count);
//		if (getchar() == '\n') {
//			printf("(%d)", i);
//			for (int j = 0; j < i; j++) {
//				if (j != i - 1)
//					cout << ary[j] << " ";
//				else
//					cout << ary[j] << endl;
//			}
//			i = 0;
//		}
//	}
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;
string ary[10000];

bool det(char ch) {
	if (ch >= '0' and ch <= '9')
		return true;
	else
		return false;
}

int main() {
	int count = 0;
	char ch;
	int i = -1;
	bool flag = true;
	string s;
	stringstream ss;

	while (getline(cin,s)) {
		flag = true;
		i = -1;
		printf("Case %d: ", ++count);
		for(int m = 0;m<s.length();m++){
			if (det(s[m])) {
				//flag: true previous one is not a number
				if (flag) {
					i++;
					flag = false;
					ary[i].append(1,s[m]);
				}
				else
					ary[i].append(1,s[m]);
			}
			else {
				if (!flag)
				flag = true;
			}
		}
		printf("(%d) ", i + 1);
		for (int j = 0; j <= i; j++) {
			if (j != i)
				cout << ary[j] << " ";
			else
				cout << ary[j];
		}
		
		cout << endl;
		
		// Reset
		
		for (int j = 0; j <= i; j++) {
			ary[j].clear();
		}
	}
	
	return 0;
}