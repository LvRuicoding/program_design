/*
    吕睿 22301050204    
*/
#include<stdio.h>
#include<math.h>
int main(){
        float x1,x2,y1,y2,d;
        scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
        d = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
        printf("%.2f",d);
}