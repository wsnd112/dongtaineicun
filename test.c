#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>



//struct S
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	struct S arr[n] = { 0 };//C99��׼  gcc֧�� VS error
//	return 0;
//}

//ʹ�ñ䳤����
int main()
{
	//int* p = (int*)malloc(INT_MAX);//���������ռ�
	int* p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)//����ʣ��ռ䲻��
	{
		//��ӡ����ԭ��ķ���
		printf("%s", strerror(errno));
	}
	else
	{
		//����ʹ�ÿռ�
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", p[i]);
		}
	}
	//����̬����Ŀռ䲻ʹ�ú�Ӧ�û�������ϵͳ
	free(p);//���ڴ�黹������ϵͳ  free(void* memblock)
	p = NULL;//
	return 0;
}












