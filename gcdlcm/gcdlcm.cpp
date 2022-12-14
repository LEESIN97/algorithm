#include <iostream>

using namespace std;

int gcd(int a, int b){
    while(b != 0){
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    cin.ignore();
    int a, b, g;
    while(t--){
        cin >> a >> b;
        cin.ignore();

        g = gcd(a, b);

        cout << g * (a/g) * (b/g) << '\n';

    }
}
