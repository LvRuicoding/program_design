/*
    吕睿 22301050204
*/
#include<stdio.h>
#include<string.h>
#define MAX 200
void clean(char str[MAX]){
    int prev = 0;
    int length = strlen(str);
    while(str[prev] == ' ' || str[prev] == '\t'){prev++;}
    for(int i = prev; i < length; i++){
        if(str[i] == ' ' && (i == length - 1 || str[i+1] == ' ' || str[i+1] == '\n')){continue;}
        else{printf("%c",str[i]);}
    }
}
int main(){
    char str[MAX];
    if (fgets(str, MAX, stdin) == NULL) {
        return 1; 
    }
    str[strcspn(str, "\n")] = '\0';
    clean(str);
}
