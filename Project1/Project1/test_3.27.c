#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//��������ʶ,C������
//int main() {
//	//strcpy(ch,"������") �ַ�����������
//	//strlen(char *) �ַ�������
//	//memset(void * ,value,index),�޸�ָ����ֵ,void * ��ָ��Ҫ���޸ĵ�ֵ,value ���޸ĵ�ֵ,indexλ������
//	//char ch[] = "aaaa";	
//	//strcpy(ch,"������");//
//	//int d = strlen(ch);
//	//memset(ch,"*",1);
//	//printf("%s\n", ch);
//	char ch[] = "aaaaaa";
//	memset(ch,"c",1);
//	printf("%s\n", ch);
//	return 0;
//}
//int is_prin(int n) {
//	for (int j = 2; j < n; j++) {
//		if (n%j ==0) {
//			return 0;
//		}
//	}
//	return 1;
//}
//int main() {
//	for (int i = 100; i < 200;i++) {
//		if (is_prin(i)==1) {
//			printf("%d\n", i);
//		}		
//	}
//	return 0;
//}



//�����int arr[]���н�����ô��ʵ������һ������,����һ��ָ��,�����޷��ں�����������һ������ĳ���
//�������ں����ڲ�������
//int text(int arr[],int k,int length) {	
//	int left = 0;//���ֲ��ҷ����û�ȡ����ʼֵ
//	while (left <= length)//ѭ���жϳ�ʼֵ�Ƿ���ڽ���ֵ,������ڲ���û��ƥ�䵽��˵����ֵ������
//	{
//		int min = (left + length) / 2;//��ȡ��������м�ֵ
//		if (arr[min]<k) {//����ֵ�����м�ֵ˵��ֵ���ұ�.
//			left = min + 1;//���ֵ���ұ���ô��ʼֵ�����м�ֵ��һ,��Ϊ�м�ֵ�Ѿ��ȶԹ���
//		}
//		else if(arr[min]>k)
//		{
//			length = min - 1;//���ֵ�������ô����ֵ�����м�ֵ��һ,��Ϊ�м�ֵ�Ѿ��ȶԹ���
//		}
//		else
//		{
//			//����һ�����,��Ȼ������,Ҳ��С��,��ôֻ�е���
//			return min;
//		}		
//	}
//	return -1;
//}
/*���ֲ��ҷ�,��������������*/
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int length = sizeof(arr) / sizeof(arr[0]);//��Ϊarr�Ǹ�ָ��,��ôָ���С��32λ����Ϊ4,��64λ������8
//	// ��ǰ���ݹ�ȥ�Ĳ���һ������,����������λ���ֵĵ�ַ
//	int te = text(arr,k,length);
//	if (te == -1) {
//		printf("û�ҵ�");
//	}
//	else
//	{
//		printf("%d\n", te);
//	}
//	return 0;
//}

/*��&ȡ��ַ�ı������к�������*/
//������mun�����3
//C������������̱��,����ͨ������Ҫʲô����ʲô,��������,���Ե��������������������
//ǰʱ���Բ����������ɵ���,�����ں���Ļ���Ҫ��Ҫ�����ú���,��ʹ�÷��򱨴�˵����δ����
//void Add(int* p) {
//	(*p)++;
//}
//void Add(int* p);//����������������Ҫ����
//int main() {
//	int mun = 0;
//	Add(&mun);//&��ַ
//	printf("%d\n", mun);
//	Add(&mun);
//	printf("%d\n", mun);
//	Add(&mun);
//	printf("%d\n", mun);
//	return 0;
//}
//
//void Add(int* p) {//ָ��*
//	(*p)++;
//}


/*����Ƕ�׵���*/
//����������̵�ԭ��,�Ѻ�����������������ǰ��
//void new_line() {
//	printf("���!\n");
//}
//void three_line() {
//	for (int i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main() {
//	three_line();
//	return 0;
//}

/*��ʽ����*/
//�Ѻ����Ļص���Ϊ������ȥ������һ������
//int new_line(int x,int y) {
//	int a = x*y;
//	return a;
//}
//void text_line(int p) {
//	printf("%d\n", p);
//}
//int main() {
//	int a = 3;
//	int b = 2;
//	text_line(new_line(a, b));
//	return 0;
//}

/*ͷ�ļ�������*/
//ͷ�ļ��������ǰѷ���������ͷ�ļ���,Ȼ��ͨ��#include���ɵ���ͷ�ļ���Ӧ�ĺ���
//ϵͳ�ķ�������<>,�Զ������Ҫ""
//#include "add.h"
//int main() {
//	printf("%d\n", Add(20, 3));
//	return 0;
//}

