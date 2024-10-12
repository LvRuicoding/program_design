#include<stdio.h>
int move_left(int x, int a){
        return x<<a;
}
int move_right(int x, int a){
        return x>>a;
}
int main(){
        int x;
        scanf("%d",&x);
        printf("%d\n",move_left(x,2));
        printf("%d\n",move_right(x,2));
        return 0;
}