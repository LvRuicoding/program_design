/*
        吕睿 22301050204
*/
#include<stdio.h>
#include<math.h>
int main(){
        int sum = 0;
        for(int i = 100; i < 1000; i++){
                if(pow(i/100,3) + pow(i%10,3) + pow((i/10)%10,3) == i){printf("%d\n",i);}
        }
        return 0;
}