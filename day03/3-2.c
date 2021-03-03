//¼ÆËã1/1-1/2+1/3-1/4+1/5 ¡­¡­ + 1/99 - 1/100 µÄÖµ
#include <stdio.h>
int main()
{
	int i;
	double x = 1;
	double sum = 0;
	for (i = 1; i<=100; i++){
		sum = sum + x / i;
		x = x*(-1);
		}
	printf("1-1/2+1/3-1/4....-1/100=%f\n", sum);
	return 0;	
}
