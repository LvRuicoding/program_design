#include<stdio.h>
void move(int n,int num[n]){
    int left = 0, right = n-1;
    while(left < right){
        if(num[left]%2 == 0 && num[right]%2 == 1){
            int temp = num[right];
            num[right] = num[left];
            num[left] = temp;
            left++;right--; 
        }
        else if(num[left]%2 == 0 && num[right]%2 == 0){right--;}
        else if(num[left]%2 == 1 && num[right]%2 == 0){left++;right--;}
        else if(num[left]%2 == 1 && num[right]%2 == 1){left++;}
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int num[n];
    for (int i = 0 ;i < n; i++){scanf("%d",&num[i]);}
    move(n,num);
    for(int i = 0; i< n; i++){printf("%d",num[i]);}
    return 0;
}