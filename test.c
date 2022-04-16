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

//void* malloc(size_t num)
//int main()
//{
//	//int* p = (int*)malloc(INT_MAX);//向堆区申请空间
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)//堆区剩余空间不足
//	{
//		//打印错误原因的方法
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
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
//	//当动态申请的空间不使用后，应该还给操作系统
//	free(p);//将内存块还给操作系统  free(void* memblock)
//	p = NULL;//
//	return 0;
//}


//void* calloc(size_t num,size_t size)
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));//向堆区申请十个整形空间并全初始化为0
//	if (p == NULL)//堆区剩余空间不足
//	{
//		//打印错误原因的方法
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
//	free(p);//释放动态内存
//	p = NULL;
//	return 0;
//}


//void* realloc(void* memblock,size_t size)
//调整动态开辟内存空间的大小
//int main()
//{
//	int* p = (int*)malloc(20);
//	//假设20个字节不够，要40个字节
//	//用realloc
//	//realloc注意事项
//	//1,如果p的空间后有足够的空间追加，则直接追加，返回p的地址
//	//2.如果p的空间后没有足够的内存追加，则realloc重新找一块满足需求的空间，
//	//将原来的数据拷贝，释放p，返回新空间的地址
//	//3,得用一个新的变量来接收realloc返回值
//	int* ptr = (int*)realloc(p, INT_MAX);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	return 0;
//}

//int main()
//{
//	int* p = realloc(NULL, 40);//等价于malloc(40);
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
//	getmemory(&str);//str传址
//	strcpy(str, "hello bite");
//	printf(str);
//	free(str);//防止内存泄漏
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
//	str = getmemory(str);//str传值
//	strcpy(str, "hello bite");
//	printf(str);
//	free(str);//防止内存泄漏
//	str = NULL;
//}
//
//int main()
//{
//	test();
//	return 0;
//}