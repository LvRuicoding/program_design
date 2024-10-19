/*
        吕睿 22301050204
*/
#include<stdio.h>
int a_power[100];
int a[100];
int b_power[100];
int b[100];
int c_power[100];
int c[100];

void print_array(int n,int arr[]){
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); 
}
int read(){
    int n,count1,count2;
    count1 = 0;
    while(1==1){
        scanf("%d",&n);
        if(count1%2 == 0 && n == -1){
            break;
            }
        if(count1%2 == 0){a_power[count1/2] = n;}
        else{a[count1/2] = n;}
        count1++;
    }
    count2 = 0;
    while(1==1){
        scanf("%d",&n);
        if(count2%2 == 0 && n == -1){
            break;
            }
        if(count2%2 == 0){b_power[count2/2] = n;}
        else{b[count2/2] = n;}
        count2++;
    }
    if(count1 > count2){return count1;}
    else{return count2;}
}  
void print_polynomial(int exponents[], int coefficients[], int size) {
    int first_term = 1; 
    int is_zero = 1;    
    for (int i = 0; i < size; i++) {
        int exponent = exponents[i];
        int coefficient = coefficients[i];
        if (coefficient == 0) {
            continue; 
        }
        is_zero = 0; 
        if (coefficient > 0 && !first_term) {
            printf("+");
        }
        if (coefficient == -1 && exponent != 0) {
            printf("-");
        } else if (coefficient != 1 || (coefficient == 1 && exponent == 0)) {
            printf("%d", coefficient);
        }
        if (exponent != 0) {
            printf("x");
            printf("^%d", exponent);
            
        }

        if (first_term) {
            first_term = 0;
        }
    }

    if (is_zero) {
        printf("0");
    }
}
int main(){
    int count = read();
    int ae = 0,be = 0;
    for(int i = 0; i < count; i++){
        if(a_power[ae] == b_power[be]){
            c_power[i] = a_power[ae];
            c[i] = a[ae] + b[be];
            c_power[i] = a_power[ae];
            ae++;
            be++;
        }
        else if(a_power[ae] > b_power[be]){
            c[i] = a[ae];
            c_power[i] = a_power[ae];
            ae++;
        }
        else if(a_power[ae] < b_power[be]){
            c[i] = b[be];
            c_power[i] = b_power[be];
            be++; 
        }
    }
    print_polynomial(c_power,c,count);  
    return 0;
}                  