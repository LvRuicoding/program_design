#include<stdio.h>
int main(){
        int a,b,c,d,m,n;
        a=1;
        b=2;
        c=3;
        d=4;
        m=1;
        n=1;
        int result = (m=a>b)&& (n=c>d);
        printf("%d %d\n",result,n);
        return 0;
}