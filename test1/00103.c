/*
        吕睿 22301050204
*/
#include<stdio.h>
int main(){
        int s ,a0, d, n;
        scanf("%d %d %d", &a0,&d,&n);
        s = n*(2*a0 + (n - 1)*d)/2;
        printf("%d",s);
        return 0;
}