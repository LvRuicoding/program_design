/*
    吕睿_22301050204
*/
#include<stdio.h>
int isprime(int x){
    for(int i = 2; i < x; i++){
        if(x%i == 0){return 0;}
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 2; i < n; i++){
        if(isprime(i) == 1){printf("%d ",i);}
    }
    if(isprime(n)){printf("%d",n);}
    return 0;
}