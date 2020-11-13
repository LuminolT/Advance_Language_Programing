#include<bits/stdc++.h>
using namespace std;
//solution 1: TLE
/*
vector<vector<int>> vec, na;
vector<int> t;
const int N = 500;
int cnt[N];

int main(){
    int n, temp, sum, m;
    stringstream ss;
    string s;
    while(getline(cin, s)){
        ss.clear();
        ss << s;
        ss >> n;
        for (int i = 0; i < n; i++){
            getline(cin, s);            //n输入
            ss.clear();
            ss << s;
            while(ss >> temp)           //船信息输入，通过临时数组t
                t.push_back(temp);
            vec.push_back(t);
            t.clear();
        }
        for (int i = 0; i < n; i++){
            sum = 0;
            for (int j = 0; j <= i; j++){       //寻找前86400秒内国籍信息，有则对应数组自增
                if(vec[j][0] + 86400 <= vec[i][0] or vec[i][1] == 0)
                    continue;
                for (int a = 2; a < vec[j].size(); a++){ //j行a列的国籍信息，改用cnt二维数组
                    // cnt[vec[j][a]]++;
                    for (m = 0; m < na.size(); m++){
                        if(na[m][0] == vec[j][a]){
                            na[m][1]++;
                            break;
                        }
                    }
                    if(na.size()==m){
                        t.push_back(vec[j][a]);
                        t.push_back(1);
                        na.push_back(t);
                        t.clear();
                    }
                }
            }
            cout << na.size() << endl;
            na.clear();
        }
        vec.clear();
    }
    return 0;
}
*/

//solution 2

vector<int>ATime, na;
const int N = 86400;
int cnt[N];

int main() {
    int ans, n, t, k, temp;
    int i = 0;
    cin >> n;
    for(int a = 1; a <= n; a++) {
        cin >> t >> k;
        for(int b = 1; b <= k; b++) {
            ATime.push_back(t);
            cin >> temp;
            na.push_back(temp);
            if (cnt[temp] == 0)
                ans++;
            cnt[temp]++; 
        }
        while(t - ATime[i] >= 86400){
            cnt[na[i]]--;
            if (cnt[na[i]] == 0)
                ans--;
            i++;
        }
        cout << ans << endl;
    }
}