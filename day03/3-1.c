//������A�е����ݺ�����B�е����ݽ��н�����������һ���� 
#include<stdio.h>
int main(){
	char a[]={"I LOVE YOU"};
	char b[]={"**********"};
	int sz=sizeof(a)/sizeof(a[0]);
	int i;
	char t;
	for(i=0;i<=sz;i++){
		t=a[i];
		a[i]=b[i];
		b[i]=t;
	}
	printf("%s\n",a);
	printf("%s\n",b);
	return 0;
} 
