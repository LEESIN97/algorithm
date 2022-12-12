#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int max_num(const vector<string>& row){
    int n = row.size();
    int ans = 1;
    for(int i=0; i<n; i++){
        int cnt = 1;
        for(int j=1; j<n; j++){
            if(row[i][j] == row[i][j-1]){
                cnt++;
            }
            else{
                cnt = 1;
            }
            if(ans < cnt) ans = cnt;
        }
        cnt = 1;
        for(int j=1; j<n; j++){
            if(row[j][i] == row[j-1][i]){
                cnt += 1;
            }
            else {
                cnt = 1;
            }
            if(ans < cnt) ans = cnt;
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    vector<string> row(n);
    for(auto iter1 = row.begin(); iter1 != row.end(); iter1++){
        getline(cin, *iter1);
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j+1 < n){
                swap(row[i][j], row[i][j+1]);
                int temp = max_num(row);
                if(ans < temp) ans = temp;
                swap(row[i][j+1], row[i][j]);
            }

            if( i+1 < n){
                swap(row[i][j], row[i+1][j]);
                int temp = max_num(row);
                if(ans < temp) ans = temp;
                swap(row[i+1][j], row[i][j]);
            }
        }
    }


    cout << ans << '\n';

    return 0;


}
