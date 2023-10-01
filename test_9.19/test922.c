#include <stdio.h>
#include <stdio.h>

int main(void)
{
    int num;
    int *a;
    int i;
    printf("输入数量");
    scanf("%d",&num)
    a=(int*)malloc(num*sizeof(int));
    for(i=0;i<num;i++){
        scanf("%d",&a[i]);
    }
    for (i=num-1;i>=0;i--) {
        printf("%d",a[i]);
    }
    return 0;
}