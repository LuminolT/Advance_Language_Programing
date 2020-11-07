#include<bits/stdc++.h>
using namespace std;

// Solution 1
int main(){
    int n, id, max;
    string s;
    queue<int> ary[26];
    while(cin >> n){
        getchar();
        for (int i = 0; i < n; i++){
            cin >> id;
            cin >> s;
            for (int j = 0; j < s.length(); j++){
                ary[s[j] - 'A'].push(id);
            }
        }
        max = 0;
        for (int i = 0; i < 26; i++){
            if (ary[i].size() > ary[max].size()){
                ary[max] = queue<int>();
                max = i;
            }
            else
                ary[i] = queue<int>();
        }
        cout << char(max + 'A') << endl
             << ary[max].size() << endl;
        while(ary[max].size() != 0){
            cout << ary[max].front() << endl;
            ary[max].pop();
        }
    }
    return 0;
}

// Solution 2

/*
#include <bits/stdc++.h>

using namespace std;

int ary[26];
string strary[26];

int main()
{
    int n, max, m;
    string temp, s;
    while(cin >> n){
        for(int i = 0; i < n; i++)
        {
            cin >> temp >> s;
            for(int j = 0; j < s.length(); j++){
                ary[s[j]-'A']++;
                strary[s[j]-'A'] += temp;
                strary[s[j]-'A'].append(1,'\n');
            }
        }
        m = 0;
        max = ary[0];
        for(int i = 1; i < 26; i++)
        {
            if(max < ary[i])
            {
                max = ary[i];
                m = i;
            }
        }
        cout << char('A' + m) << endl
             << max << endl
             << strary[m];
        memset(ary,0,sizeof(ary));
        for(int i = 0; i < 26; i++)
            strary[i].clear();
    }
    return 0;
}
*/