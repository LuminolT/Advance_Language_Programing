#include<bits/stdc++.h>
using namespace std;
int ary[6];

int main(){
    string s;
    stringstream ss;
    int sum, chunk1, chunk2;
    while(getline(cin,s)){
        sum = 0;
        if(s == "0 0 0 0 0 0")
            break;
        chunk1 = chunk2 = sum = 0;
        //input
        ss.clear();
        ss << s;
        for (int i = 0; i < 6; i++)
            ss >> ary[i];
        sum += ary[5] + ary[4] + ary[3] + (ary[2] + 3) / 4;
        chunk2 = 5 * ary[3] + (ary[2] % 4 == 0 ? 0 : (ary[2] % 4 == 1 ? 5 : (ary[2] % 4 == 2 ? 3 : 1)));
        if (ary[1] > chunk2)
            sum += (ary[1] - chunk2 + 8) / 9;
        chunk1 = 36 * (sum - ary[5]) - 25 * ary[4] - 16 * ary[3] - 9 * ary[2] - 4 * ary[1];
        if (ary[0] > chunk1)
            sum += (ary[0] - chunk1 + 35) / 36;
        cout << sum << endl;
    }
    return 0;
}