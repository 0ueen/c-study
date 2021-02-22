//创建一个结构体类型
#include<stdio.h>
#include<string.h> 
struct Book{
  char name[20];//数组名的修改需要用strcpy 字符串拷贝 ,在string.h库函数里面 
  short price;//变量可以随意修改 
};//分号不可缺少

int main(){
  struct Book b1 ={"C语言程序设计",55};
  struct Book* pb =&b1;
  //用结构体类型创建一个该类型的结构体变量
  b1.price=15; 
  strcpy(b1.name,"C++");
  //printf("书名：%s\n",b1.name);
  //利用pb打印书名和价格 
  printf("书名：%s\n,价格：%s\n",(*pb).name,(*pb).price);//.操作符主要是用于结构体变量成员 
  printf("书名：%s\n,价格：%s\n",pb->name,pb->price);//-操作符主要是用于  结构指针->成员 
  return 0;
}
