//����һ���ṹ������
#include<stdio.h>
#include<string.h> 
struct Book{
  char name[20];//���������޸���Ҫ��strcpy �ַ������� ,��string.h�⺯������ 
  short price;//�������������޸� 
};//�ֺŲ���ȱ��

int main(){
  struct Book b1 ={"C���Գ������",55};
  struct Book* pb =&b1;
  //�ýṹ�����ʹ���һ�������͵Ľṹ�����
  b1.price=15; 
  strcpy(b1.name,"C++");
  //printf("������%s\n",b1.name);
  //����pb��ӡ�����ͼ۸� 
  printf("������%s\n,�۸�%s\n",(*pb).name,(*pb).price);//.��������Ҫ�����ڽṹ�������Ա 
  printf("������%s\n,�۸�%s\n",pb->name,pb->price);//-��������Ҫ������  �ṹָ��->��Ա 
  return 0;
}
