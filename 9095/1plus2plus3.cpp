#include <iostream>

using namespace std;

int d[11];

int compute_howmany_ways(int n){
    if(n == 1) d[n] = 1;
    else if(n == 2) d[n] = 2;
    else if(n == 3) d[n] = 4;

    else{
        if(d[n] > 0) return d[n];

        else d[n] = compute_howmany_ways(n-1) + compute_howmany_ways(n-2) + compute_howmany_ways(n-3);
    }

    return d[n];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    int n;

    while(t--){
          cin >> n;
          cout << compute_howmany_ways(n) << '\n';
    }

    return 0;
}
