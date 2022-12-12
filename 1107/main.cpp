#include <iostream>
#include <cstdlib>
using namespace std;

bool broken_button[10]; // 0 ~ 9
int decim[6];

bool possible(int c){
    if (c==0){
        if(broken_button[0]) return false;
        else return true;
    }

    while(c>0){
        if(broken_button[c%10]) return false;
        c/=10;
    }

    return true;
}
int main()
{
    int n; // goal channel
    int m; // broken button num
    int length; // 10 ^ length
    int click_cnt = 0;

    cin >> n;
    cin.ignore();
    cin >> m;
    cin.ignore();

    int temp;

    for(int i=0; i<m; i++){
        cin >> temp;
        broken_button[temp] = true;
    }

    click_cnt = abs(100 - n); // 100 to n

    for(int i=0; i<=1000000; i++){
        if(possible(i)){
            int c = i;
            int cnt = 0;
            while(c > 0){
                c = c/10;
                cnt ++;
            }
            if( i == 0) length = 1;
            else length = cnt;

            if(click_cnt > length + abs(n - i)) click_cnt = length + abs(n - i);
        }

    }

    cout << click_cnt << '\n';













}
