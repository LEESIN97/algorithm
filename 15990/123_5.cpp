#include <iostream>

using namespace std;

long long d[100001][4];

const long long md = 1000000009;
const int limit = 100000;

int main(){
    int t;
    cin >> t;
    cin.ignore();

    int n;

    for (int i=1; i<=limit; i++) {

            d[i][1] = d[i-1][2] + d[i-1][3];
            if (i == 1) {
                d[i][1] = 1;
            }

            if (i-2 >= 0) {
                d[i][2] = d[i-2][1] + d[i-2][3];
                if (i == 2) {
                    d[i][2] = 1;
                }
            }
            if (i-3 >= 0) {
                d[i][3] = d[i-3][1] + d[i-3][2];
                if (i == 3) {
                    d[i][3] = 1;
                }
            }
            d[i][1] %= md;
            d[i][2] %= md;
            d[i][3] %= md;
        }

    while(t--){
        cin >> n;
        cin.ignore();

        cout << (d[n][1] + d[n][2] + d[n][3])%md << '\n';

    }

    return 0;
}
