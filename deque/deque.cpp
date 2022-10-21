#include <iostream>
#include <string>
using namespace std;

typedef struct deque{

    int int_array[10000] = {0, };
    int front_index = 4999;
    int back_index = 5000;

    void push_front(int x){
        int_array[front_index] = x;
        front_index--;
    }

    void push_back(int x){
        int_array[back_index] = x;
        back_index++;
    }

    int pop_front(void){
        int temp = 0;

        if(this->size() == 0) return -1;

        else{
            temp = int_array[front_index+1];
            int_array[front_index + 1] = 0;
            front_index += 1;
            return temp;
        }
    }

    int pop_back(void){
        int temp = 0;

        if(this->size() == 0) return -1;

        else{
            temp = int_array[back_index-1];
            int_array[back_index-1] = 0;
            back_index -= 1;
            return temp;
        }
    }

    int size(void){
        return back_index - front_index - 1;
    }

    bool empty(void){
        if(this -> size() == 0) return true;
        else return false;
    }

    int front(void){
        if(this -> size() == 0){
            return -1;
        }
        else return int_array[front_index+1];
    }

    int back(void){
        if(this -> size() == 0){
            return -1;
        }

        else return int_array[back_index-1];
    }

}deque;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string cmd;
    deque d;
    int n;
    int x;

    cin >> n;
    cin.ignore();

    while(n--){
        cin >> cmd;

        if(cmd == "push_front" ){
            cin >> x;
            cin.ignore();
            d.push_front(x);
        }

        else if(cmd == "push_back" ){
            cin >> x;
            cin.ignore();
            d.push_back(x);
        }

        else if(cmd == "pop_front"){
            cout << d.pop_front() << '\n';
        }

        else if(cmd == "pop_back"){
            cout << d.pop_back() << '\n';
        }

        else if(cmd == "size"){
            cout << d.size() << '\n';
        }

        else if(cmd == "empty"){
            cout << d.empty() << '\n';
        }

        else if(cmd == "front"){
            cout << d.front() << '\n';
        }

        else if(cmd == "back"){
            cout << d.back() << '\n';
        }
    }


    return 0;

}
