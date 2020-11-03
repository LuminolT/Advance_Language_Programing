#include<bits/stdc++.h>
using namespace std;

string charstr[16] = { "□□□□", "□□□■", "□□■□", "□□■■",

                        "□■□□","□■□■", "□■■□", "□■■■",

                        "■□□□","■□□■", "■□■□", "■□■■",

                        "■■□□","■■□■", "■■■□", "■■■■" };

int main() {
    int count = 0;
    int n = 1;
    string s;
    while (cin>>s) {
        if (n == 65)
            n = 1;
        if(n == 1)
            printf("Case %d:\n", ++count);
        //s= 00 00 40 08 37 FC 10 08 82 08 62 08 22 10 09 10 11 20 20 A0 E0 40 20 A0 21 10 22 08 24 0E 08 04
        for (int i = 0; i < s.length(); i++) {
            //if (s[i] == ' ')
            //    continue;
            if (n % 4 == 0) {
                if (s[i] >= '0' && s[i] <= '9')
                    cout << charstr[s[i] - '0'] << endl;
                else
                    cout << charstr[s[i] - 'A' + 10] << endl;
                // '0' = 48
                // char <= int <= long <= long long
                // charstr[s[0]] -> s[0]
                // s[0] = '0' =(ASCII)= 48
                //cout<<int('0')
            }
            else {
                if (s[i] >= '0' && s[i] <= '9')
                    cout << charstr[s[i] - '0'];
                else
                    cout << charstr[s[i] - 'A' + 10];
            }
            n++;

        }
    }
    return 0;
}