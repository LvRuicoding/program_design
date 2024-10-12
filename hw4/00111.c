/*
    吕睿 22301050204
*/

#include<stdio.h>
void printbi(int a){
    if(a < 2){int b = 0;}
    else{
        a = a / 2;
        printbi(a);
      	printf("%d",a%2);
    }
}
int main(){
    char c;
    scanf("%c",&c);
    int a = (int) c;
    if(a < 128){printf("0");}
    if(a < 64){printf("0");}
    printbi((int) c);
    printf("%d",a%2);
    return 0;
}