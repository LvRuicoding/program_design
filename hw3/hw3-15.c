#include <stdio.h>

int main(){
/*TODO*/
    int a,b,c;
    scanf("%d %d %d",&a ,&b, &c);
    int sum,ave,min,max;
    sum = a+b+c;
    ave = sum/3;
    if(a >= b && a >= c){max = a;}
    else if(b >= c && b >= a){max = b;}
    else{max = c;}
    if(a <= b && a <= c){min = a;}
    else if(b <= c && b <= a){min = b;}
    else{min = c;}
    printf("sum=%d\n",sum);
    printf("average=%d\n",ave);
    printf("max=%d\n",max);
    printf("min=%d\n",min);
    return 0;
}