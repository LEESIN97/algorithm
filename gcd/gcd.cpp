#include <iostream>

using namespace std;

int gcd(int a, int b){
    while(b!=0){
        int r = a%b;
        a = b;
        b = r;

    }

    return a;
}

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    int g = gcd(num1, num2);
    cout << g << '\n';
    cout << g * (num1/g) * (num2/g);



}
