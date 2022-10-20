#include <iostream>
#include <string>
using namespace std;

typedef struct queue{
    int queue_[10000];
    int begin = 0;
    int end = 0;

    void push(int x){
        queue_[end] = x;
        end += 1;
    }

    int pop(){
        if(this->empty()) return -1;
        else {
            int temp;
            temp = queue_[begin];
            queue_[begin] = 0;
            begin += 1;
            return temp;
        }
    }

    int size(){
        return end - begin;
    }

    bool empty(){
        if(begin == end)return true;
        else return false;
    }

    int front(){
        if(this->empty()) return -1;
        else return queue_[begin];
    }

    int back(){
        if(this->empty()) return -1;
        else return queue_[end-1];
    }
}queue;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    queue q;
    string command;
    int n; //over 1 below 10000
    int temp = 0;

    cin >> n;
    cin.ignore();
    while(n--){
        cin >> command;

        if(command == "push"){
            cin >> temp;
            q.push(temp);
        }

        else if(command == "pop"){
            cout << q.pop() << '\n';
        }

        else if(command == "size"){
            cout << q.size() << '\n';
        }

        else if(command == "empty"){
            if(q.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }

        else if(command == "front"){
            cout << q.front() << '\n';
        }

        else if(command == "back"){
            cout << q.back() << '\n';
        }

        cin.ignore();
    }

    return 0;
}
