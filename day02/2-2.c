#include<stdio.h>
//��10 �����������ֵ
int main(){
	int a[10];
	int i=0;
	while(i<10){
		scanf("%d",&a[i]);
		i++;
	}
	i=1;
	int max=a[0];
	while(i<10){
		if(a[i]>=max)
			max=a[i];
		i++; 
	}
	printf("%d",max);
	return 0;
} 
