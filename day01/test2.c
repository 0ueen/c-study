#include<stdio.h>
//打印乘法口诀表 
int main(){
	int i=1,j=1;
	int num=9;
	for(i=1;i<=9;i++){
		for(j=1;j<=num;j++){
			printf("%d * %d = %d ",i,j,i*j);
		}
		num--;
		printf("\n");
	}
	return 0;
}
