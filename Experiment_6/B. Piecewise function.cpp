#include <bits/stdc++.h>
using namespace std;
int main(){
    double x;
    while (cin >> x){
        cout << fixed << setprecision(3);
        if(0 <= x and x < 5)
            cout << -1 * x + 2.5 << endl;
        if(5 <= x and x < 10)
            cout << 2 - 1.5 * (x - 3) * (x - 3) << endl;
        if(10 <= x and x < 20)
            cout << 0.5 * x - 1.5 << endl;
    }
    return 0;
}