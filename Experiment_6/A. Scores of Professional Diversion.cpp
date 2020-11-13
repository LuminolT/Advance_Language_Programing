#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int a, b, c;
    while(cin >> n){
        for (int i = 0; i < n; i++){
            cin >> a >> b >> c;
            cout << a * 0.45 + b * 0.45 + c * 0.1 << endl;
        }
    }
    return 0;
}