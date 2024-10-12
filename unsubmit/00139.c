/*
        吕睿 22301050204
*/
#include<stdio.h>
#include<math.h>
double f(double x){
    return pow(x,3) - pow(x,2) - 1;
}
int main(){
    double a,b,middle;
    a = 0.0;
    b = 3.0;
    while(fabs(f(a) - f(b)) > 1e-6){
        middle = (a+b) / 2.0;
        if(f(middle)*f(a) > 0){a = middle;}
        else{b = middle;}
    }
    printf("%.5f",a);
    return 0;
}