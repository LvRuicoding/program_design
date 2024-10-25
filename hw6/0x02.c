/*
    吕睿_22301050204
*/
#include<stdio.h>
#include <string.h>
#include<math.h>
#define MAX 500
int n_list[MAX];
void add(int n_list1[],int n_list2[], int length){
    for(int i = 0; i < length; i++){
        n_list[i] += n_list1[i] + n_list2[i];
        if(n_list[i] > 9){
            n_list[i] -= 10;
            n_list[i+1] += 1;
        }
    }
}
void trans(char s_list[],int n_list[]){
    int length = strlen(s_list);
    for(int i = length-1; i >= 0; i--){
        n_list[length - i] = s_list[i] - '0';
    }
}
int main(){
    char s_list1[MAX],s_list2[MAX];
    int n_list1[MAX],n_list2[MAX];
    scanf("%s",s_list1);
    scanf("%s",s_list2);
    int length = (strlen(s_list1) > strlen(s_list2)) ? strlen(s_list1) : strlen(s_list2);
    length++;
    trans(s_list1,n_list1);
    trans(s_list2,n_list2);
    add(n_list1,n_list2,length);
    for(int i = length; i>0 ;i--){
        if(i == length && n_list[i] == 0){continue;}
        printf("%d",n_list[i]);
    }
    return 0;
}