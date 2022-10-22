#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    stack<char> word;
    string s;
    getline(cin, s);


    if(s.find('<') == string::npos){
        int i = 0;
        while(i < int(s.length())){
            while(s[i]!=' ' && i != int(s.length())){
                word.push(s[i]);
                i++;
            }

            while(!word.empty()){
                cout << word.top();
                word.pop();
            }
            if(i != int(s.length())){
                cout << s[i];
                i++;
            }

        }
    }

    else{
        int i = 0;
        while(i < int(s.length())){
            if(s[i] == '<'){

                /*while(!word.empty()){
                    cout << word.top();
                    word.pop();
                }*/

                for(;s[i]!='>';i++){
                    cout << s[i];
                }

                cout << s[i];
                i++;
            }

            else{


                while(s[i]!=' ' && i != int(s.length()) && s[i] != '<'){
                    word.push(s[i]);
                    i++;
                }

                while(!word.empty()){
                    cout << word.top();
                    word.pop();
                }
                if(i != int(s.length()) && s[i] != '<'){
                    cout << s[i];
                    i++;
                }


            }
        }
    }
}
