#include <stdio.h>
int main()
{
	/*TODO*/
    int a,b;
    scanf("%d %d",&a,&b);
    if(a > b){
        printf("%d大于%d\n",a,b);
        printf("%d不等于%d\n",a,b);
        if(a%b == 0){printf("%d整除%d\n",a,b);}
    }
    else if(a < b){
        printf("%d小于%d\n",a,b);
        printf("%d不等于%d\n",a,b);
    }
    else{printf("%d等于%d\n",a,b);
         printf("%d整除%d\n",a,b);}
    return 0;
}
