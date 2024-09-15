/*
        吕睿 22301050204
*/
#include<stdio.h>
int main(){
        int a,b;
        scanf("%d %d",&a,&b);
        float c = (float) a / b;
        printf("%d %d %d %.2f %d",a+b,a-b,a*b,c,a%b);
        return 0;
}