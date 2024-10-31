#include<stdio.h>
int main(){
    int num[20];
    for(int i = 0; i< 20 ;i++){scanf("%d",&num[i]);}
    int min,second_min;
    min = num[0];
    if(num[1] > min){second_min = num[1];}
    else{
        second_min = min;
        min = num[1];
    }
    for(int i = 2 ; i< 20; i++){
        if(num[i] < min){
            second_min = min;
            min = num[i];
        }
        else if(num [i] > min && num[i] < second_min){second_min = num[i];}
        else{continue;}
    }
    printf("%d\n",min);
    printf("%d\n",second_min);
    return 0;
}