/*
        吕睿 22301050204
*/
#include<stdio.h>
#include<string.h>
int main(){
        char name[100];
        scanf("%s",&name);
        int l = strlen(name) + 19;
        for(int i = 0; i < l; i++){printf("*");}
        printf("\n      Hello %s!      \n",name);
        for(int i = 0; i < l; i++){printf("*");}
        printf("\n");
        return 0;
}