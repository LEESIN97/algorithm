//돈을 최대한 많이 지불하고 카드 N개 구매
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

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            d[i] = max(d[i], d[i-j] + price[j]);
        }
    }

    cout << d[n] << '\n';

    return 0;

}
