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
//	struct S arr[n] = { 0 };//C99标准  gcc支持 VS error
//	return 0;
//}

//使用变长数组
int main()
{
	//int* p = (int*)malloc(INT_MAX);//向堆区申请空间
	int* p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)//堆区剩余空间不足
	{
		//打印错误原因的方法
		printf("%s", strerror(errno));
	}
	else
	{
		//正常使用空间
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
	//当动态申请的空间不使用后，应该还给操作系统
	free(p);//将内存块还给操作系统  free(void* memblock)
	p = NULL;//
	return 0;
}












