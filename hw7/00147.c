/*
    吕睿 22301050204
*/
#include<stdio.h>
void printnum(int a,int b,int c){
    printf("row is %d,col is %d,num is %d\n",a,b,c);
}
void printedge(int a,int b,int c,int d){
    printf("high is %d,low is %d, left is %d,right is %d\n",a,b,c,d);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[15][15];
    int high = 0,low = n-1,left = 0,right = n-1;
    int row = 0,col = 0,dir = 3;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] == 0;
        }
    }
    for(int i = 1; i <= n*n; i++){
        if(row == high && col < right && dir == 3){
            arr[row][col] = i;
            col++;
            }
        else if(row == high && col == right  && dir == 3){
            arr[row][col] = i;
            high++;
            row++;
            dir = 1;
        }
        else if(col == right && row < low && dir == 1){
            arr[row][col] = i;
            row++;
        }
        else if(col == right && row == low  && dir == 1){
            arr[row][col] = i;
            right--;
            col--;
            dir = 2;
        }
        else if(row == low && col > left && dir == 2){
            arr[row][col] = i;
            col--;
        }
        else if(row == low && col == left  && dir == 2){
            arr[row][col] = i;
            low--;
            row--;
            dir = 0;
        }
        else if(col == left && row > high && dir == 0){
            arr[row][col] = i;
            row--;
        }
        else if(col == left && row == high  && dir == 0){
            arr[row][col] = i;
            left++;
            col++;
            dir = 3;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}