#include<bits/stdc++.h>
using namespace std;

int main(){
    int count = 0;
    int n;
    string bef, aft;
    while (cin >> n) {
        cin.get();
        for (int i = 0; i < n; i++) {
            getline(cin, bef);
            printf("Case %d: ", ++count);
            aft = bef;
            reverse(aft.begin(), aft.end());
            if (bef == aft)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}
