#include<stdio.h>
//����������ʱ����������������������
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
