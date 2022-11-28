#include <iostream>

using namespace std;

bool prime(int num){
    if(num < 2){
        return false;
    }

    for(int i=2; i*i<=num; i++){
        if(num % i == 0){
            return false;
        }
    }

    return true;
}


int main()
{
    int n;
    cin >> n;
    cin.ignore();

    int num;
    int count = 0;
    while(n--){
        cin >> num;

        if(prime(num)){
            count++;
        }
    }

    cout << count;
}
