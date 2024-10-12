/*
        吕睿 22301050204
*/
#include<stdio.h>
int fac(int n){
    if(n == 1){return 1;}
    else{
        return n*fac(n-1);
    }
}
int main(){
    double e = 1.0;
    for(int i = 1; i < 10; i++){
        e += 1 / (double) fac(i);
    }
    printf("%.3f",e);
    return 0;
}