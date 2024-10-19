/*
        吕睿 22301050204
*/
#include<stdio.h>
int array[100];
int main(){
    int length,temp_length,n,num,prev_num;
    scanf("%d",&n);
    for(int i = 0; i<n; i++){
        scanf("%d",&num);
        array[i] = num;
    }
    prev_num = array[0];
    temp_length = 0;
    for(int i = 1; i < n; i++){
        if(prev_num == array[i]){
            temp_length++;
        }
        else{
            if(temp_length > length){
                length = temp_length;
                }
            temp_length = 0;
        }
        prev_num = array[i];
    }
    if(temp_length > length){length = temp_length;}
    printf("%d",length+1);
    return 0;

}