#include<stdio.h>
//判断1000-2000年之间的闰年数 
//普通闰年：公历年份是4的倍数，且不是100的倍数的，为闰年（如2004年、2020年等就是闰年）。
//世纪闰年：公历年份是整百数的，必须是400的倍数才是闰年（如1900年不是闰年，2000年是闰年）
int main(){
	int year;
	int num;
	for(year=1000;year<=2000;year++){
		if(year%4==0&&year%100!=0){
			printf("%d\n",year);
			num++;
		}
		if(year%100==0&&year%400==0){
			printf("%d\n",year);
			num++;
		}
	}
	printf("总个数是：%d",num);
	return 0;
}
