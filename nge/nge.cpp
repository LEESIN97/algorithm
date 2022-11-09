#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a;
    cin >> a;
    cin.ignore();

    int *array = new int[a];
    for(int i=0; i<a; i++){
        cin >> array[i];
    }

    //Evaluate NGE each index

    stack<int> temp_stack;
    stack<int> result_stack;

    for(int i=0; i<a; i++){
        if(temp_stack.empty()&&i==0) temp_stack.push(array[i]);

        if(array[i]<temp_stack.top()) temp_stack.push(array[i]);

        while(temp_stack.top() < array[i]){
            temp_stack.pop();
            result_stack.push(array[i]);
        }
        if(i == a-1 && !temp_stack.empty()){
            while(!temp_stack.empty()){
                cout << -1 << ' ';
                temp_stack.pop();
            }
        }
        while(!result_stack.empty()){
            cout << result_stack.top() << ' ';
            result_stack.pop();
        }
        temp_stack.push(array[i]);


        if(i==a-1) cout << -1;
        }

    delete [] array;
}






