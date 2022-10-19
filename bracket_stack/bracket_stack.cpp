#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    cin.ignore();

    stack<char> temp;
    string str_vps;

    while(T--){
        getline(cin, str_vps);
        str_vps += '\n';
        while(!temp.empty()) temp.pop();
        for(char ch : str_vps){

            if(temp.empty() && ch == '\n') cout << "YES" << '\n';

            if(ch == '(') temp.push(ch);
            else if(ch == ')'){
                if(temp.empty()) {
                    cout << "NO" <<'\n';
                    break;
                }
                else if(temp.top() == '(') temp.pop();
            }
        }
        if(!temp.empty()) cout << "NO" << '\n';

    }
}
