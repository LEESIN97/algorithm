#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int gcd(int a, int b){
    int r;

    while(b!=0){
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    int n;
    long long s;
    cin >> n >> s;
    cin.ignore();

    int temp;
    vector<int> a(n);
    vector<int>::iterator iter_a, iter_a2;
    for(iter_a = a.begin(); iter_a != a.end(); iter_a++){
        cin >> temp;
        *iter_a = temp;
        *iter_a = abs(*iter_a - s);
    }
    int result;
    if(n == 1) result = a[0];
    else{
        result = gcd(a[0], a[1]);

        for(iter_a2 = a.begin()+2; iter_a2 != a.end(); iter_a2++){
        result = gcd(result, *iter_a2);
        }
    }

    cout << result << '\n';


}
