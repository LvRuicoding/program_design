/*
        吕睿 22301050204
*/
#include<stdio.h>
#include<math.h>
void print_num(int x){
        if (x < 10) {printf("%d*",x);}
        else{
                print_num(x/10);
                printf("%d*",x%10);
        }
        
}
int main(){
        int a;
        scanf("%d",&a);
        print_num(a);
        return 0;
}