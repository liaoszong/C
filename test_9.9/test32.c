#include <stdio.h>

int main(void)
{
    int t;
    int num;
    double sum;
    int cnt = 0;
    int number[100];
    for(sum=1;num!=-1;cnt++) {
        scanf("%d",&num);
        number[cnt]=num;
        sum += num;
    }
    cnt -= 1;
    printf("%f\n",sum/cnt);

    t=cnt;
    for(cnt=0;cnt<=t;cnt++) {
        if(number[cnt]>sum/t) {
            printf("%d",number[cnt]);
        }
    }

    return 0;
}