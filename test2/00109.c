/*
    吕睿 22301050204    
*/
#include<stdio.h>
#include<math.h>
int main(){
        float a,b,c,p,l;
        scanf("%f %f %f",&a,&b,&c);
        p = (a + b + c) / 2;
        l = sqrt(p*(p-a)*(p-b)*(p-c));
        printf("%.2f",l);
        return 0;
}