/*
        吕睿 22301050204
*/
#include<stdio.h>
int main(){
        int a,b,c;
        printf("Please input three integers:\n");
        scanf("%d,%d,%d",&a,&b,&c);
        if(a > b && a > c){printf("max=%d",a);}
        if(b > a && b > c){printf("max=%d",b);}
        if(c > b && c > a){printf("max=%d",c);}
        return 0;
}