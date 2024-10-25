/*
    吕睿 22301050204
*/
#include<stdio.h>
#include<string.h>
#define MAX 1024
char returnstr[MAX];
char tosmall(char c){
    if(c <= 'Z' && c >= 'A'){c += 32;}
    return c;
}
char tobig(char c){
    if(c <= 'z' && c >= 'a'){c -= 32;}
    return c;
}
void exchange(char str[],int length){
    for(int i = 0; i < length; i++){
        if(str[i] == '*'){
            returnstr[i] = ' ';
            returnstr[i+1] = tobig(str[i+1]);
            i++;
        }
        else{returnstr[i] = tosmall(str[i]);}
    }
}
int main(){
    char str[MAX];
    if (fgets(str, MAX, stdin) == NULL) {
        return 1; 
    }
    str[strcspn(str, "\n")] = '\0';
    int length = strlen(str);
    for(int i = 0; i < length; i++){
        if(str[i] == ' '){str[i] = '*';}
    }
    exchange(str ,length);
    returnstr[0] = tobig(returnstr[0]);
    printf("%s",returnstr);
    return 0;
}