#include <iostream>
#include <queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; // number of people
    int k; // remove by order

    cin >> n >> k;

    queue<int> people;

    for(int i=1; i<=n; i++){
        people.push(i);
    }

    cout << '<';

    while(!(people.size() == 1)){
        for(int i=0; i<k-1; i++){
            people.push(people.front());
            people.pop();
        }

        cout << people.front();
        cout << ", ";
        people.pop();
    }
    cout << people.front();
    cout << '>';
}
