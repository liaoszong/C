#include <stdio.h>

int isprime(int x,int numberlink,int konwprime[]);
int main(void)
{
    int i=3;
    int t;
    int count;
    const int number=10;
    int prime [10]={2};

    for(count=1;count<number;i++) {
        if(isprime(i,count,prime)){
            prime[count++]=i;
        }
    }
    for(t=0;t<10;t++) {
        printf("%d  ",prime[t]);
    }
}
int isprime(int x,int numberlink,int konwprime[])
{
    int ret=1;
    int i;
    for(i=0;i<numberlink;i++) {if(x% konwprime[i]==0) {
        ret=0;
        break;
        }
    }
    return ret;
}