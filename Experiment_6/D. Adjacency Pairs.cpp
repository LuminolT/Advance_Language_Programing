#include <bits/stdc++.h>
using namespace std;
vector<int> vec;
int main(){
    int a, b, n, temp, sum;
    while(cin >> n){
        sum = 0;
        for (int i = 0; i < n; i++){
            cin >> temp;
            vec.push_back(temp);
        }
        sort(vec.begin(), vec.end());
        for (int i = 0; i < vec.size() - 1; i++){
            if (vec[i] + 1 == vec[i + 1]){
                a = b = 1;
                while(vec[i - a] == vec[i])
                    a++;
                if(i + b + 1 != vec.size()){
                    while(vec[i + 1] == vec[i + b + 1]){
                        b++;
                        if(i + b == vec.size())
                            break;
                    }
                }
                sum += a * b;
            }
        }
        cout << sum << endl;
        vec.clear();
    }
    return 0;
}