#include <iostream>
using namespace std;
const int MAX = 1000000;
bool check[MAX + 1] = { false, };
int prime[MAX];
int pn = 0;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    check[0] = check[1] = true;

    for (int i = 2; i * i <= MAX; i++) {
        if (check[i] == false) {
            prime[pn++] = i;

            for (int j = i + i; j <= MAX; j += i) {
                check[j] = true;
            }
        }
    }

    while (1) {
        int n;
        cin >> n;

        if (n == 0)
            break;


        int i;
        for (i = 1; i < pn; i++) {
            if (check[n - prime[i]] == false) {
                cout << n << " = " << prime[i] << " + " << n - prime[i] << '\n';
                break;
            }
        }

        if (i >= pn) {
            cout << "Goldbach's conjecture is wrong\n";
        }
    }

    return 0;
}
