#include<stdio.h>
//打印100-200之间的素数 
int main(){
	int i=100;
	int k=1;
	int num=0;
	int n;
	for(i;i<=200;i++){
		for(n=2;n<i;n++){
		if(i%n==0){
			k=0;
			break;
		}
		else
			k=1;
	}
		if(k==1){
			printf("%d\n",i);
			num++;
		}	
	}
	printf("%d\n",num);
	return 0;
} 
