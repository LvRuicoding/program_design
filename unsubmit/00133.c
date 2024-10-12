/*
        吕睿 22301050204
*/
#include<stdio.h>
#include<math.h>
int main(){
        char operater;
    float x, y, result;
    scanf("%f %c %f", &x, &operater, &y);
    switch (operater) {
        case '+':
            result = x + y;
            printf("%.2f\n", result);
            break;
        case '-':
            result = x - y;
            printf("%.2f\n", result);
            break;
        case '*':
            result = x * y;
            printf("%.2f\n", result);
            break;
        case '/':
            if (fabs(y - 0.0) < 1e-6) {
                printf("Wrong input\n");
            } else {
                result = x / y;
                printf("%.2f\n", result);
            }
            break;
        default:
            printf("Wrong input\n");
            break;
    }

    return 0;
}