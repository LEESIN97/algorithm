#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
    string bar_and_lazer;
    int theNumOf_bars = 0;
    stack<char> bar_start_point;

    getline(cin, bar_and_lazer);
    for(int i=0; i<int(bar_and_lazer.length()); i++){
        if(bar_and_lazer[i] == '('){
            if(bar_and_lazer[i+1] == ')'){
                theNumOf_bars += bar_start_point.size();
                i++;
            }

            else{
                bar_start_point.push(bar_and_lazer[i]);
            }
        }

        else{
            bar_start_point.pop();
            theNumOf_bars++;
        }


    }

    cout << theNumOf_bars;
}
