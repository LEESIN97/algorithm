#include <iostream>

using namespace std;

int main()
{
    int e, s, m;
    cin >> e >> s >> m;

    int year_cnt = 0;

    while(1){
        if(e == 1 && s == 1 && m == 1){
            year_cnt++;
            break;
        }
        e--;
        s--;
        m--;
        if(e == 0) e = 15;
        if(s == 0) s = 28;
        if(m == 0) m = 19;
        year_cnt++;
    }

    cout << year_cnt << '\n';

    return 0;
}
