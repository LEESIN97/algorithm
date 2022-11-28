#include <stdio.h>

int main()
{
    int num[5][5];
    int max = num[0][0];
    int max_row, max_col;
    for(int row=0; row<5; row++){
        for(int col=0; col<5; col++){
            scanf("%d", &num[row][col]);
        }
        getchar();
    }

    for(int row=0; row<5; row++){
        for(int col=0; col<5; col++){
            if(num[row][col] > max){
                max = num[row][col];
                max_row = row+1;
                max_col = col+1;
            }
        }
    }

    printf("%d\n%d %d", max, max_row, max_col);



}
// 최대값을 출력하고 그다음 줄에는 행과 열을 공백하나를 두고 출력 (중복시 행이 앞선 숫자를, 이후 중복 시 열이 앞선 숫자를)

