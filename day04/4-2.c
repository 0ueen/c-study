//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2+22+222+2222+22222
#include<stdio.h>
#include<math.h>
int main(){
	int a;
	int sum=0;
	int b=0;
	int i,j;
	scanf("%d",&a);
	for(i=1;i<=5;i++){
		b=0;
		for(j=1;j<=i;j++){
			b+=a*pow(10,j-1);	
		}
		sum+=b;
	}
	printf("%d",sum);
	return 0;
}
