#include <iostream>

using namespace std;

int a[100000];
int d[100000];
int main()
{
    int n;
    cin >> n;
    cin.ignore();

    int temp;
    for(int i=0; i<n; i++){
        cin >> temp;
        a[i] = temp;
        d[i] = a[i];
    }

    for(int i=1; i<n; i++){
        if(a[i] < d[i-1] + a[i] ) d[i] = d[i-1] + a[i];
    }

    int max = d[0];
    for(int i=0; i<n; i++){
        if(max < d[i]) max = d[i];
    }

    cout << max << '\n';


    return 0;
}
