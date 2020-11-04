#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,x;
    stringstream ss;
    int count = 0, n = 0;
    while(getline(cin,s)){
        n = 0;
        ss.clear();
        ss << s;
        while(ss >> x){
            n++;
        }
        printf("Case %d: %d\n", ++count, n);
    }
    return 0;
}