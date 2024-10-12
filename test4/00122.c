/*
	吕睿 22301050204
*/
#include<stdio.h>
#include<string.h>
int main(){  
	int n,i,j;
	scanf("%d",&n);
	for (i=1;i<=n;++i){
		for (j=1;j<n*2-i;++j)
			if (i==1||i==j||i+j==2*n) printf("* ");
			else printf("  ");
		puts("*");
	}
	return 0;   
}