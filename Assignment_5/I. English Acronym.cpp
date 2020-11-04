#include<bits/stdc++.h>
using namespace std;

//solution 1
void upper(string &s){
    for (int i = 0; i < s.length(); i++){
        s[i] = (s[i] >= 'a' and s[i] <= 'z') ? s[i] + 'A' - 'a' : s[i];
    }
}

int main(){
    int count = 0;
    string s, temp = "";
    char x;
    queue<string> que;
    while(getline(cin,s)){
        printf("Case %d: ", ++count);
        for (int i = 0; i < s.length(); i++){
            if (s[i] == ' ' or s[i] == '\'' or s[i] == '-'){
                continue;
            }
            temp.append(1, s[i]);
            if (s[i+1] == ' ' or s[i+1] == '\'' or s[i+1] == '-' or s[i+1] == '\0'){
                que.push(temp);
                temp.clear();
            }
        }
        while (que.size() != 0){
            temp = que.front();
            upper(temp);
            if(temp == "THE" or temp == "A" or temp  == "AN" or temp  == "OF" or temp  == "FOR" or temp  == "AND")
                que.pop();
            else{
                cout << que.front()[0];
                que.pop();
            }
        }
        cout << endl;
    }
    return 0;
}

//solution 2
/*

*/