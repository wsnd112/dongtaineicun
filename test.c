#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//typedef struct stu
//{
//	char name[20];
//	int age;
//}stu;
//int main()
//{
//	stu s1 = { "zjl",20 };
//	printf("%s\n",s1.name);
//	return 0;
//
//}
//struct Node
//{
//	int data;
//	//struct Node n;  error;
//	struct Node* next;
//};
//int main()
//{
//	printf("%d", sizeof(struct Node));
//	return 0;
//}
//void* my_memcpy(void* e1, const void* e2, size_t sz)
//{
//    assert(e1 && e2);
//    void* ret = e1;
//    while (sz--)
//    {
//        *(char*)e1 = *(char*)e2;
//        ++(char*)e1;
//        ++(char*)e2;
//    }
//    return ret;
//}
//void* my_memmove(void* e1, void* e2, size_t sz)
//{
//    assert(e1 && e2);
//    void* ret = e1;
//    if (e1 > e2)
//    {
//        while (sz--)
//        {
//            *((char*)e1 + sz) = *((char*)e2 + sz);
//        }
//    }
//    else
//    {
//        while (sz--)
//        {
//            *(char*)e1 = *(char*)e2;
//            ++(char*)e1;
//            ++(char*)e2;
//        }
//    }
//    return ret;
//}
//
//typedef struct stu
//{
//    char name[20];
//    int age;
//}s;
//int main()
//{
//    /*s arr1[] = { {"zhangsan",20},{"lisi",18} };
//    s arr2[5] = { 0 };*/
//    /* int arr1[] = { 1,2,3,4,5 };
//     int arr2[6] = { 0,0,0,0,0,9 };
//     my_memcpy(arr2, arr1, sizeof(arr1));*/
//     /* int i;
//      for (i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
//      {
//          printf("%d ", arr2[i]);
//      }*/
//    int arr[] = { 1,2,3,4,5,6,7,8,9 };
//    //my_memcpy(&arr[2], arr, 20);
//    my_memmove(&arr[2], arr, 20);
//    //my_memmove(arr, &arr[2], 20);
//    int i = 0;
//    for (i = 0; i < 9; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//#pragma pack(4)//设置默认对齐数为4;
//struct S
//{
//	char a;
//	double b;
//};
//#pragma pack()//取消设置的默认对齐数;
//int main()
//{
//	struct S s = { 0 };
//	printf("%d", sizeof(s));
//	return 0;
//}
//#include<stddef.h>//offsetof()--计算偏移量;
//struct S
//{
//	char a;
//	int b;
//	double d;
//};
//int main()
//{
//	printf("%d\n", offsetof(struct S, a));
//	printf("%d\n", offsetof(struct S, b));
//	printf("%d\n", offsetof(struct S, d));
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
//void Init(struct S* ps)
//{
//	ps->a = 10;
//	ps->c = 'W';
//	ps->d = 3.14;
//}
//void Print1(struct S tmp)
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
//void Print2(const struct S* ps)
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);
//	Print1(s);
//	Print2(&s);
//	return 0;
//}
// 
//位段
//typedef struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//}s;
//
//int main()
//{
//	s a = { 0 };
//	a.a = 10;
//	a.b = 20;
//	a.c = 3;
//	a.d = 4;
//	return 0;
//}
//枚举
enum Coler
{
	//枚举常量；
	RED,//0
	GREEN,//1
	BLUE//2
};
//联合体 共用体 公用一块空间；
union Un
{
	char c;
	int i;
};
int check_sys()
{
	union Un
	{
		char c;
		int i;
	};
	union Un u = { 0 };
	u.i = 1;
	//return 1表示小端
	//return 0表示大端
	return u.c;
}
int main()
{
	int ret = check_sys();
	if (1 == ret)
	{
		printf("小端");
	}
	else
	{
		printf("大端");
	}
	return 0;
}





















































