/*
        吕睿 22301050204
*/
#include<stdio.h>
#include<math.h>
float distance(int x1,int y1,int x2,int y2){
        return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}
int main(){
        float x1,y1,x2,y2,x3,y3;
        scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3);
        if (distance(x1,y1,x2,y2) == distance(x2,y2,x3,y3) && distance(x1,y1,x2,y2) == distance(x1,y1,x3,y3)){printf("等边三角形");}
        else if(distance(x1,y1,x2,y2) == distance(x2,y2,x3,y3) || distance(x1,y1,x2,y2) == distance(x1,y1,x3,y3) || distance(x3,y3,x2,y2) == distance(x1,y1,x3,y3)){printf("等腰三角形");}
        else if()
}