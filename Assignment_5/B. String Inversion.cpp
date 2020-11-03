#include<bits/stdc++.h>
using namespace std;

int main() {
    int count = 0;
    int n;
    int i = 0;
    string bef, aft;
    while (cin >> n) {
        cin.get();
        for (int i = 0; i < n; i++) {
            getline(cin, bef);
            printf("Case %d: ", ++count);
            aft = bef;
            reverse(aft.begin(), aft.end());
            cout << aft << endl;
        }
    }
    return 0;
}