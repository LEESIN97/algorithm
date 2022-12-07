#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int d[1001];

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    vector<int> price(n+1);
    int temp;

    for(int i=1; i<n+1; i++){
        cin >> temp;
        price[i] = temp;
    }

    d[1] = price[1];

    for(int i=2; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(d[i] == 0) d[i] = d[i-j] + price[j];
            else d[i] = min(d[i], d[i-j] + price[j]);
        }
    }

    cout << d[n] << '\n';

    return 0;

}
