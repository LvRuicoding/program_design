/*
        吕睿 22301050204
*/
#include<stdio.h>
#include<math.h>
double fac(int n) {
    double result = 1.0;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
int main(){
    double ex = 1.0;
    int x;
    double add;
    scanf("%d",&x);
    for(int i = 1; 1==1; i++){
        add = pow(x,i) / fac(i);
        if(add < 1e-10){break;}
        ex += pow(x,i) / fac(i);
    }
    printf("%.3f",ex);
    return 0;
}