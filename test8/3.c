#include<stdio.h>
#include<string.h>
int checkin(char c,char str[100]){
    for(int i = 0; i < 100; i++){
        if(c == str[i]){return i;}
        else if(str[i] == '\0'){return -1;}
    }
    return -1;
}
int main(){
    char a[100];
    char b[100];
    int c[100];
    fgets(a,100,stdin);
    int length = strlen(a);
    int k = 0;
    for(int i = 0; i < 100; i++){b[i] = '\0';}
    for (int i = 0 ;i < length; i++){
        if(checkin(a[i],b) >= 0){
            c[checkin(a[i],b)]++;
        }
        else{
            b[k] = a[i];
            c[k] = 1;
            k++;
        }
    }
    int max = 0;
    int max_arr = 0;
    for(int i = 0; i < k;i++){
        if(c[i] > max){
            max = c[i];
            max_arr = i;
            }
    }
    printf("%c\n",b[max_arr]);
    printf("%d\n",max);
    return 0;
}