/*
        吕睿 22301050204
*/
#include<stdio.h>
int main(){
        int a,b;
        scanf("%d",a);
        b = (a/100) + ((a/10)%10)*10 + (a%10)*100;
        printf("%d",b);
        return 0;
}