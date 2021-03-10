//求出0～999之间的所有“水仙花数”并输出
#include<stdio.h>
#include<math.h>
int main(){
	int i;
	for(i=100;i<1000;i++){
		int sum=0,a=0,b=0,c=0;
		int t=i;
		a=t%10;
		t/=10;
		b=t%10;
		t/=10;
		c=t;
		sum=pow(a,3)+pow(b,3)+pow(c,3);
		if(i==sum){ 
			printf("%d = %d^3 + %d^3 +%d^3。\n",i,a,b,c);
	}	
	} 
	return 0;
}
