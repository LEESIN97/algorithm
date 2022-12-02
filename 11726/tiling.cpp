// topdown - cpp
#include <iostream>

using namespace std;
int d[1001];

int compute_cases(int n){
    if(n < 3) return d[n];

    else{

        if(d[n] > 0) return d[n];

        else d[n] = (compute_cases(n-1) + compute_cases(n-2)) % 10007;
    }

    return d[n];
}

int main()
{
    int n;
    cin >> n;
    d[1] = 1;
    d[2] = 2;
    cout << compute_cases(n) << '\n';

    return 0;

}
