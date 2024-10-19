/*
        吕睿 22301050204
*/
#include<stdio.h>
int array[100];
int check(int a, int num){
    for(int i = 0;i < num; i++){
        if(array[i] == a){return 1;}       
    }
    return 0;
}
int main(){
    int n,x,count;
    count = 0;
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        scanf("%d",&x);
        if(check(x,i) == 0){
            array[count] = x;
            count++;}
        else{continue;}
    }
    for(int i = 0; i < count-1; i++){
        printf("%d ",array[i]);
    }
    printf("%d",array[count-1]);
    return 0;
}