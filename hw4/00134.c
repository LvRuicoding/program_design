/*
    吕睿 22301050204
*/

#include <stdio.h>
#include<math.h>
int main(){
        for(int a = 0; a <= 20; a++){
                for(int b = 0; b <= 100; b++){
                        for(int c = 0; c <= 100; c++){
                                float sum = (float) c / 3 + b*3 + a * 5;
                                if(fabs(sum - 100.0) < 0.00001 && a + b + c == 100){
                                        printf("%d %d %d\n",a,b,c);
                                        
                                }
                        }
                }
        }
        return 0;
}