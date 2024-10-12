/*
        吕睿 22301050204
*/
#include<stdio.h>
int isprime(int n){
    for(int i = 2; i < n; i++){
        if (n%i == 0){return 0;}
    }
    return 1;
}
int nextprime(int a){
    for(int i = a + 1; i < a*a ;i++){
        if(isprime(i) == 1){return i;}
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d=",n);
    if(isprime(n) == 1){
        printf("%d",n);
        return 0;
    }
    for(int i = 2; i < n; i = nextprime(i)){
        while(n%i == 0){
            printf("%d*",i);
            n = n / i;
        }
    }
    printf("%d",n);
    return 0;
}