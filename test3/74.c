#include<stdio.h>
int get_last_7(int x){
        return x&0177;
}
int keep_last_6(int x){
        return x&077;
}
int main(){
        int x;
        scanf("%d",&x);
        printf("%d\n",get_last_7(x));
        printf("%d\n",keep_last_6(x));
}