//Debug和Release的区别
//Debug通常为调试版本，它包含调试信息,并不做任何优化，便于程序员调试程序。
//Release称为发布版本,它往往是进行了各种优化,是的程序代码在大小和运行速度上都是最优的，以便用户最好的使用。


#include<stdio.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS

//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//自己实现strcpy
//void my_strcpy(char* a, char* b)
//{
//	while (*b != '\0')
//	{
//		*a = *b;
//		a++;
//		b++;
//	}
//	*a = *b;
//}
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//第一次优化
//void my_strcpy(char* a, char* b)
//{
//	while (*b!='\0')
//	{
//		*a++ = *b++;
//	}
//	*a = *b;
//}
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//第二次优化
//void my_strcpy(char* a, char* b)
//{
//	while (*a++ = *b++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//第三次优化
//void my_strcpy(char* a, char* b)
//{
//	if (a != NULL && b != NULL)//为空指针则不打印，但是不报错，容易找不到错误
//	while (*a++ = *b++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);//防止空指针
//	printf("%s\n", arr1);
//	return 0;
//}

#include<assert.h>
//第四次优化
//void my_strcpy(char* a, char* b)
//{
//		assert(a != NULL && b != NULL);//assert是断言的意思，如果出现NULL空指针则会报错
//		while (*a++ = *b++)//先赋值再判断所以\0也赋值了
//		{
//			;
//		}
//}
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//int main()
//{
//	const int a = 10;//const是常量，但是指针可以强制改变
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	const int* p = &a;//const放在左边，修饰的是*p，不能改变*p的值
//	*p = 20;//这步有错误
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;//const放在右边，修饰的是指针变量p，能改变*p的值，不能改变p的值
//	*p = 20;
//	int b = 30;
//	printf("%d\n", a);
//	printf("%p\n", p);
//	p = &b;
//	printf("%p\n", p);
//	return 0;
//}

//第五次优化
//void my_strcpy(char* a, const char* b)//这个const防止了*b被改变，怕下面赋值写倒了没有提示
//{
//	assert(a != NULL);
//	assert(b != NULL);
//	while (*a++ = *b++)//防止这里被写成*b++=*a++
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "###";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//第六次优化
//char* my_strcpy(char* a, const char* b)
//{
//	int* d = a;
//	assert(a != NULL);
//	assert(b != NULL);
//	while (*a++ = *b++)//把b指向的字符串拷贝到a指向的空间,包含'\0'
//	{
//		;
//	}
//	return d;
//}
//int main()
//{
//	char arr1[] = "###";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));//链式访问
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%p\n", arr);//打印的是首元素地址
//	char arr1[] = "abc";
//	printf("%s\n", arr1);//字符串可以通过arr1打印字符串
//	char arr2[] = { 'a','b','c','\0' };
//	printf("%s\n", arr2);
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abc";
//	printf("%s\n", arr1);//这个可以直接打印字符串，但是不能打印地址，地址需要指针
//	printf("%c\n", arr1[0]);//这样也可以打印单个字符
//	char* a = arr1;
//	printf("%c\n", *a);//打印单个字符
//	printf("%s\n", a);//打印字符串
//	printf("%p\n", a);//打印地址
//	printf("%p", ++a);//打印第二个字符地址
//	return 0;
//}