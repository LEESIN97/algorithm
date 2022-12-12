#include <iostream>

using namespace std;

int d[100001];

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    for(int i=1; i<=n; i++){
        if(i<=3) d[i] = i;
        int min = d[i - 1];
        for(int j=1; j*j<=i; j++){
            if(j*j == i) d[i] = 1;
            else if(d[i - j*j] < min) min = d[i - j*j];
        }
        if(d[i] == 1) continue;

        d[i] = min + 1;
    }

    cout << d[n] << '\n';

    return 0;
}
