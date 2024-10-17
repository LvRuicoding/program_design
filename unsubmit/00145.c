/*
        吕睿 22301050204
*/
#include<stdio.h>
int a_power[100];
int a[100];
int b_power[100];
int b[100];
int c_power[100];
int c[100];
int read(){
    int n,count1,count2;
    count1 = 0;
    while(1==1){
        scanf("%d",&n);
        if(count1%2 == 1 && n == -1){
            break;
            }
        if(count1%2 == 0){a_power[count1/2] = n;}
        else{a[count1/2+1] = n;}
        count1++;
    }
    count2 = 0;
    while(1==1){
        scanf("%d",&n);
        if(count2%2 == 1 && n == -1){
            break;
            }
        if(count2%2 == 0){b_power[count2/2] = n;}
        else{b[count2/2+1] = n;}
        count2++;
    }
    if(count1 > count2){return count1/2;}
    else{return count2/2;}
}  
int main(){
    int count = read();
    int ae,be = 0;
    for(int i = 0; i < count; i++){
        if(a_power[ae] == b_power[be]){
            c_power[i] = a_power[ae];
            c[i] = a[ae] + b[be];
            ae++;
            be++;
        }
        else if(a_power[ae] > b_power[be]){
            
        }

    }
    return 0;
}                  