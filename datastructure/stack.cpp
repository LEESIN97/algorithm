#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int stack[10000];

    int N;
    cin >> N;

    string cmd;
    int X;
    int size = 0;

    for(int i=0; i < N; i++){
        cin >> cmd;

        if(cmd == "push"){
            cin >> X;
            stack[size] = X;
            size += 1;
        }

        if(cmd == "pop"){
            if (size > 0 && stack[size - 1] > 0){
                cout << stack[size - 1] << '\n';
                stack[size - 1] = 0;
                size -= 1;
            }
            else {
                cout << -1 << '\n';
            }
        }

        if(cmd == "size"){
            cout << size << '\n';
        }

        if(cmd == "empty"){
            if(size == 0) cout << 1 << '\n';
            else cout << 0 << '\n';
        }


        if(cmd == "top"){

           if(stack[size - 1] > 0 && size > 0) {
               cout << stack[size - 1] << '\n';
           }
           else {
               cout << -1 << '\n';
           }
        }
    }



}
