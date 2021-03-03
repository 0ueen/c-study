//编写程序数一下 1到 100 的所有整数中出现多少个数字9
#include<stdio.h>
int main(){
	int num=0;
	int right,left;
	int i;
	i=left;
	scanf("%d%d",&left,&right);
	for(i;i<=right;i++){
		if(i%10==9)
			num++;
		if(i/10==9)
			num++;
		if(i/100==9)
			num++;
	}
	printf("%d",num);
	return 0;
} 
