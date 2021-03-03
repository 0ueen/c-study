//将数组A中的内容和数组B中的内容进行交换。（数组一样大） 
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
