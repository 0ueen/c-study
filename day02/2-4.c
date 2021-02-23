#include<stdio.h>
//求两个数的最大公约数
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int i=1;
	int j,num=1;
	if(a>b) j=b;
	else j=a;
	while(i<=j){
		if(a%i==0&&b%i==0)
			num=i;	
		i++;
	}
	printf("%d",num);
	return 0;
}
