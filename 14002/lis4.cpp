#include <iostream>

using namespace std;

int a[1001];
int d[1001];
int v[1001];

void go(int p){
    if(p == -1){
        return;
    }

    go(v[p]);
    cout << a[p] << ' ';
}

int main()
{
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
        v[i] = -1;
        for(int j=0; j<i; j++){
            if(a[j] < a[i] && d[i] < d[j] +1){
                d[i] = d[j] + 1;
                v[i] = j;
            }
        }
    }

    int max = -1;
    int p = 0;
    for(int i = 0; i<n; i++){
        if(max < d[i]) {
            max = d[i];
            p = i;
        }
    }
    cout << max << '\n';
    go(p);

    return 0;

}
