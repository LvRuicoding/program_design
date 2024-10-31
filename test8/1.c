#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    int max = -1 , second_max = -1;
    gets(a);
    for(int i = 0 ;i < 100; i++){
        if(a[i] == '\0'){break;}
        else if(a[i] >= '0' && a[i] <= '9'){
            int number = a[i] - '0';
            if(number > max){
                second_max = max;
                max = number;
            }
            else if(number > second_max && number < max){
                second_max = number;
            }
            else{continue;}
        }
    }
    printf("%d",second_max);
    return 0;

}