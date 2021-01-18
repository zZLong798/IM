/*
#include <stdio.h>
#define MUL(x,y) ((x)*(y))

int main (void) {
    int a = 0, b = 0;
    printf("请输入两个正整数：\n");
    scanf("%d %d", &a, &b);
    printf("乘积为%d。\n", MUL(a,b));
    return 0;
}
*/

#include <stdio.h>
//#define xx(a,b) {int t;t=a;a=b;b=t;}

int main(){
    int x,y;
    printf("input x y:\n");
    scanf("%d %d",&x,&y);
    //xx(x,y);
    {int t;t=x;x=y;y=t;}
    printf("x=%d y=%d\n",x,y);

    return 0;
}