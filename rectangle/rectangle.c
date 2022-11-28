#include <stdio.h>

typedef struct{
    struct{
        int l_x;
        int l_y;
    }leftupper_point;

    struct{
        int r_x;
        int r_y;
    }rightdown_point;

}rect;

int compute_intersect_area(rect* r1, rect* r2){
    if(r1->rightdown_point.r_x < r2->leftupper_point.l_x) return -1;

    if(r1->leftupper_point.l_x > r2->rightdown_point.r_x) return -1;

    if(r1->rightdown_point.r_y < r2->leftupper_point.l_y) return -1;

    if(r1->leftupper_point.l_y > r2->rightdown_point.r_y) return -1;

    int width, height, left_up_x, left_up_y, right_down_x, right_down_y;

    if(r1->leftupper_point.l_x > r2->leftupper_point.l_x) left_up_x = r1->leftupper_point.l_x;

    else left_up_x = r2->leftupper_point.l_x;

    if(r1->leftupper_point.l_y > r2->leftupper_point.l_y) left_up_y = r1->leftupper_point.l_y;

    else left_up_y = r2->leftupper_point.l_y;

    if(r1->rightdown_point.r_x < r2->rightdown_point.r_x) right_down_x = r1->rightdown_point.r_x;

    else right_down_x = r2->rightdown_point.r_x;

    if(r1->rightdown_point.r_y < r2->rightdown_point.r_y) right_down_y = r1->rightdown_point.r_y;

    else right_down_y = r2->rightdown_point.r_y;

    width = right_down_x - left_up_x;
    height = right_down_y - left_up_y;

    return width * height;
}

int main()
{
    rect r[2];

    for(int i=0; i<2; i++){
        scanf("%d %d %d %d", &r[i].leftupper_point.l_x, &r[i].leftupper_point.l_y, &r[i].rightdown_point.r_x, &r[i].rightdown_point.r_y);
        getchar();
    }

    int area = compute_intersect_area(&r[0], &r[1]);
    printf("%d\n", area);

}

