#include <stdio.h>

int main(void)
{
    int n;
    int i;
    const int num=25;
    int isprime[num];
    for(i=2;i<num;i++) {
        isprime[i]=1;
    }
    for(i=2;i<num;i++) {
        if(isprime[i]) {
            for(n=2;i*n<num;n++) {
                isprime[i*n]=0;
            }
        }
        
    }
    for(i=0;i<num;i++) {
        if(isprime[i] ==1) {
            printf("%d  ",i);
        }
    }
}