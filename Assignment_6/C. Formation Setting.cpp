#include<bits/stdc++.h>
using namespace std;

int main(){
    bool ini = true;
    string s, temp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp;
        if (s.length() + temp.length() > 79){
            cout << s << endl;
            s.clear();
            ini = true;
        }
        if(ini)
            ini = false;
        else
            s.append(1, ' ');
        s += temp; 
    }
    if (s.length() != 0)
        cout << s << endl;
    return 0;
}