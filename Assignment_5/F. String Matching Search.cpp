#include<bits/stdc++.h>
using namespace std;

int main() {
    string s, target;
    int count = 0;
    while(getline(cin,target)){
        getline(cin, s);
        string::size_type position;
        position = s.find(target);
        printf("Case %d: %d\n", ++count, ((position == s.npos) ? -1 : position));
    }
}