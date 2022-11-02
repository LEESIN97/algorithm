#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    stack<int> discrim;

    int n;
    cin >> n;
    cin.ignore();
    int* a = new int[n];
    int* output = new int[n];
    int temp;
    for(int i=0; i<n; i++){
        cin >> temp;
        a[i] = temp;
    }

    for(int i=0; i<n; i++){
        if(i==0) discrim.push(i);

        else if(a[discrim.top()] < a[i] && i != n-1){
            output[discrim.top()] = a[i];
            discrim.pop();
            discrim.push(i);
        }

        else if(a[discrim.top()] >= a[i]){
            discrim.push(i);
        }

        if(i==n-1){
            while(!discrim.empty()){
                if(a[discrim.top()] < a[i]){
                    output[discrim.top()] = a[i];
                    discrim.pop();
                }

                else{
                    output[discrim.top()] = -1;
                    discrim.pop();
                }
            }
            output[n-1] = -1;
        }
    }

    for(int i=0; i<n; i++){
        if(i != n-1) cout << output[i] << ' ';
        else cout << output[i];
    }

    delete[] a;
    delete[] output;
}
