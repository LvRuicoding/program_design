/*
        吕睿 22301050204
*/
#include<stdio.h>
int main(){
        int z,a,b,c;
        scanf("%d",&z);
        a = z/100;
        b = (z/10)%10;
        c = z%10;
        printf("%d%d%d",c,b,a);
        return 0;
}