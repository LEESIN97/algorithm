#include <iostream>
#include <stack>

using namespace std;

int main(){
    int T;
    cin >> T;
    cin.get();

    char sentence[T][1000];

    for(int i =0; i<T; i++){
        cin.getline(sentence[i], 1000, '\n');
    }



    stack<char> word;

    for(int i=0; i<T; i++){
        int j = 0;
        int start_index = 0;
        int end_index = 0;

        while(sentence[i][j] != '\0'){
            if(sentence[i][j] == ' '){
                end_index = j;
                for(;start_index < end_index; start_index++){
                    cout << word.top();
                    word.pop();
                }

                cout << ' ';

                start_index = j+1;
            }

            else {
                word.push(sentence[i][j]);
            }

            j++;
        }
        for(;start_index < j; start_index++){
            cout << word.top();
            word.pop();
        }

        cout << '\n';

    }





}
