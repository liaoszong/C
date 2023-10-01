#include <stdio.h>

int chect(int a[],int key,int length);
int main(void)
{
    int a []={2,4,6,7,1,3,5,9,11,13,23,14,32};
    int x;
    int loc;
    printf("输入数字");
    scanf("%d",&x);
    loc=chect(a,x,sizeof(a)/sizeof(a[0]));
    if(loc !=-1) {
        printf ("该数是a[%d]",loc);
    } else printf("该数不在此数组中");
}
int chect(int a[],int key,int length)
{
    int ret =-1;
    int i;
    for(i=0;i<length;i++) {
        if(a[i]==key){
            ret =i;
            break;
        }
    }
    return ret;
}