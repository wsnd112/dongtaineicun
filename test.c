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

//void* malloc(size_t num)
//int main()
//{
//	//int* p = (int*)malloc(INT_MAX);//���������ռ�
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)//����ʣ��ռ䲻��
//	{
//		//��ӡ����ԭ��ķ���
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", p[i]);
//		}
//	}
//	//����̬����Ŀռ䲻ʹ�ú�Ӧ�û�������ϵͳ
//	free(p);//���ڴ�黹������ϵͳ  free(void* memblock)
//	p = NULL;//
//	return 0;
//}


//void* calloc(size_t num,size_t size)
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));//���������ʮ�����οռ䲢ȫ��ʼ��Ϊ0
//	if (p == NULL)//����ʣ��ռ䲻��
//	{
//		//��ӡ����ԭ��ķ���
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", p[i]);
//		}
//	}
//	free(p);//�ͷŶ�̬�ڴ�
//	p = NULL;
//	return 0;
//}


//void* realloc(void* memblock,size_t size)
//������̬�����ڴ�ռ�Ĵ�С
//int main()
//{
//	int* p = (int*)malloc(20);
//	//����20���ֽڲ�����Ҫ40���ֽ�
//	//��realloc
//	//reallocע������
//	//1,���p�Ŀռ�����㹻�Ŀռ�׷�ӣ���ֱ��׷�ӣ�����p�ĵ�ַ
//	//2.���p�Ŀռ��û���㹻���ڴ�׷�ӣ���realloc������һ����������Ŀռ䣬
//	//��ԭ�������ݿ������ͷ�p�������¿ռ�ĵ�ַ
//	//3,����һ���µı���������realloc����ֵ
//	int* ptr = (int*)realloc(p, INT_MAX);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	return 0;
//}

//int main()
//{
//	int* p = realloc(NULL, 40);//�ȼ���malloc(40);
//	return 0;
//}

//void getmemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void test()
//{
//	char* str = NULL;
//	getmemory(&str);//str��ַ
//	strcpy(str, "hello bite");
//	printf(str);
//	free(str);//��ֹ�ڴ�й©
//	str = NULL;
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//char* getmemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void test()
//{
//	char* str = NULL;
//	str = getmemory(str);//str��ֵ
//	strcpy(str, "hello bite");
//	printf(str);
//	free(str);//��ֹ�ڴ�й©
//	str = NULL;
//}
//
//int main()
//{
//	test();
//	return 0;
//}