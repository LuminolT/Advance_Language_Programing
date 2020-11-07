#include<bits/stdc++.h>
using namespace std;

int main(){
    int ary[2] = {0, 0};
    int i = 0;
    string s, x;

    while(cin >> x){
        s += x;
    }

    while (s[i] != 'E'){
        ary[s[i] == 'W' ? 0 : 1]++;
        if ((ary[0] > 10 or ary[1] > 10) and abs(ary[0]-ary[1] > 1)){
            printf("%d:%d\n", ary[0], ary[1]);
            memset(ary, 0, sizeof(ary));
        }
        i++;
    }
        printf("%d:%d\n", ary[0], ary[1]);

    memset(ary, 0, sizeof(ary));

    cout << endl;

    i = 0;
    while (s[i] != 'E'){
        ary[s[i] == 'W' ? 0 : 1]++;
        if ((ary[0] > 20 or ary[1] > 20) and abs(ary[0]-ary[1] > 1)){
            printf("%d:%d\n", ary[0], ary[1]);
            memset(ary, 0, sizeof(ary));
        }
        i++;
    }
        printf("%d:%d\n", ary[0], ary[1]);

    return 0;
}