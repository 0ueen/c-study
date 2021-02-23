#include<stdio.h>
//不允许创建临时变量，交换两个数的内容
//way 1
//int main(){
//	int a=10;
//	int b=20;
//	int sum=0;
//	sum = a+b;
//	a = sum-a;
//	b = sum-b;
//	printf("%d %d ",a,b);
//	return 0;
//} 
//way 2 
int main(){
	int a=10;
	int b=20;
	a=a^b;
	b=a^b;
	a=a^b;
	printf("%d %d ",a,b);
	return 0;
}
