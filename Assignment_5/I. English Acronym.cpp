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
#include<bits/stdc++.h>
using namespace std;

bool judge(char ch){
    if (ch >= 'A' and ch <= 'Z')
        return true;
    return false;
}

string upper(string s){
    for (int i = 0; i < s.length(); i++){
        s[i] = (s[i] >= 'a' and s[i] <= 'z') ? s[i] + 'A' - 'a' : s[i];
    }
        return s;
}

int main(){
    int count = 0;
    bool flag = true;
    bool flag2 = true;
    string s;
    char ch[100];
    char temp;
    while(true){
        memset(ch, '\000', sizeof(ch));
        s.clear();
        scanf("%s[^\n-]", &ch);
        temp = getchar();
        s = ch;
        if(flag){
            printf("Case %d:", ++count);
            flag = false;
        }
        // should use a temp_v to voiding lowercase situation
        s = upper(s);
        if (s == "THE" or s == "A" or s == "AN" or s == "OF" or s == "FOR" or s == "AND")
            continue;
        if(s[0]!=' '){
            if(flag2){
                cout << " ";
                flag2 = false;
            }
            cout << s[0];
        }
        if(temp=='\n'){
            cout << endl;
            flag = true;
            flag2 = true;
        }

        if(temp==EOF)
            break;
    }
    return 0;
}
*/