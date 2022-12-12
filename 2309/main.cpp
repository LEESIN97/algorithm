#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int height[9];
    int height_sum = 0;
    for(int i=0; i<9; i++){
        cin >> height[i];
        cin.ignore();
        height_sum += height[i];
    }

    sort(height, height+9);

    for(int i=0; i<8; i++){
        for(int j=i+1; j<9; j++){
            if(height_sum - height[i] - height[j] == 100){
                for(int k=0; k<9; k++){
                    if(k == i || k == j) continue;
                    else cout << height[k] << '\n';
                }

                return 0;
            }
        }
    }

}
