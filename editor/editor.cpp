#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string command; //4가지의 명령어
    char ch_command;
    char new_ch;
    string init_str;
    stack<char> stck_str; //초기에 입력되는 길이가 N인 문자열 N은 최대 100000의 길이를 가진다.
    stack<char> stck_str_temp;
    int M; // 최대 500000의 명령어의 개수를 가지는 양의 정수 M

    getline(cin, init_str);

    for(auto ch : init_str){
        stck_str.push(ch);
    }

    cin >> M;
    cin.ignore();

    while(M--){
        getline(cin, command);

        if(command[0] == 'P') {
            ch_command = command[0];
            new_ch = command[2];
        }

        else ch_command = command[0];

        if(ch_command == 'P') stck_str.push(new_ch);

        else if(ch_command == 'D'){
            if(!stck_str_temp.empty()){
                stck_str.push(stck_str_temp.top());
                stck_str_temp.pop();
            }
        }

        else if(ch_command == 'L'){
            if(!stck_str.empty()){
                stck_str_temp.push(stck_str.top());
                stck_str.pop();
            }

        }

        else {
            if(!stck_str.empty()) stck_str.pop();
        }
    }


    while(!stck_str.empty()){
        stck_str_temp.push(stck_str.top());
        stck_str.pop();
    }

    while(!stck_str_temp.empty()){
        cout << stck_str_temp.top();
        stck_str_temp.pop();
    }

    cout << '\n';


}
