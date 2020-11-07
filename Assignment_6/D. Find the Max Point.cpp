#include<bits/stdc++.h>
using namespace std;
const int N = 101;
vector<int> ary[N];

bool cmp(int a,int b){
    return a > b;
}

int main(){
    bool ini;
    int n, x, y;
    int max_y, max_x;
    while (cin >> n){
        ini = true;         //判断是否是第一个输出，前面没有逗号
        max_y = 0;
        max_x = 0;
        //input
        for (int i = 0; i < n; i++){
            cin >> x >> y;
            max_y = max_y > y ? max_y : y;
            ary[y].push_back(x);
        }

        //sort
        for (int i = 0; i < N; i++)
            sort(ary[i].begin(),ary[i].end(),cmp);

        //比较最大的x, 梯度下降
        while(max_y > 0){
            if(ary[max_y].size() == 0){         //空表跳过
                max_y--;
                continue;
            }
            if (ary[max_y][0] > max_x){
                max_x = ary[max_y][0];          //同一y对应x的最大值
                if (ini){
                    printf("(%d,%d)", max_x, max_y);
                    ini = false;
                }
                else
                    printf(",(%d,%d)", max_x, max_y);
            }
            max_y--;
        }
        cout << endl;
        for (int i = 0; i < N; i++){
            ary[i].clear();
        }
    }
    return 0;
}