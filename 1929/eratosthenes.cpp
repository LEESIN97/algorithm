#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    int m;
    int n;
    cin >> m >> n;
    vector<bool> check(n);
    vector<int> prime(n);
    int pn = 0;
    for(int i=2; i<=n; i++){
        if(check[i] == false){
            prime[pn++] = i;
            for(int j =  i*2; j<=n; j+=i){
                check[j] = true;
            }
        }
    }

    for(int i=0; i<pn; i++){
        if(prime[i] >= m && prime[i] <= n) cout << prime[i] << '\n';
    }
}
