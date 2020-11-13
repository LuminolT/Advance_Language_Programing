#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> a;

int main(){
    bool flag;
    int n, temp, j;
    while(cin >> n){
        for (int i = 0; i < n; i++){
            cin >> temp;
            flag = false;
            for (j = 0; j < a.size(); j++){
                if (a[j][0] == temp){
                    a[j][1]++;
                    cout << a[j][1];
                    flag = true;
                    break;
                }
            }
            if(flag)
                goto label;

            a.push_back({temp,1});
            cout << 1;
            label:
            if (i != n - 1)
                cout << " ";
            else
                cout << endl;
        }
    }
    return 0;
}