/*
        吕睿 22301050204
*/
#include<stdio.h>
#define PI 3.14159
int main(){
        float r;
        scanf("%f",&r);
        float c,s;
        c = 2*PI*r;
        s = PI*r*r;
        printf("%.2f %.2f",c,s);
        return 0;
}