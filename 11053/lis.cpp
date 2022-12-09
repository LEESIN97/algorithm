#include <iostream>

using namespace std;

int a[1001];
int d[1001];

int main(){
    int n;
    cin >> n;
    cin.ignore();

    int temp;
    for(int i=0; i<n; i++){
        cin >> temp;
        a[i] = temp;
    }

    for(int i=0; i<n; i++){
        d[i] = 1;
        for(int j=0; j<i; j++){
            if(a[j] < a[i] && d[i] < d[j] + 1)
                d[i] = d[j] + 1;
        }
    }

    int max = -1;
    for(int i=0; i<n; i++){
        if(max < d[i]) max = d[i];
    }

    cout << max << '\n';

    return 0;
}
