//Debug��Release������
//Debugͨ��Ϊ���԰汾��������������Ϣ,�������κ��Ż������ڳ���Ա���Գ���
//Release��Ϊ�����汾,�������ǽ����˸����Ż�,�ǵĳ�������ڴ�С�������ٶ��϶������ŵģ��Ա��û���õ�ʹ�á�


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

//�Լ�ʵ��strcpy
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

//��һ���Ż�
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

//�ڶ����Ż�
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

//�������Ż�
//void my_strcpy(char* a, char* b)
//{
//	if (a != NULL && b != NULL)//Ϊ��ָ���򲻴�ӡ�����ǲ����������Ҳ�������
//	while (*a++ = *b++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);//��ֹ��ָ��
//	printf("%s\n", arr1);
//	return 0;
//}

#include<assert.h>
//���Ĵ��Ż�
//void my_strcpy(char* a, char* b)
//{
//		assert(a != NULL && b != NULL);//assert�Ƕ��Ե���˼���������NULL��ָ����ᱨ��
//		while (*a++ = *b++)//�ȸ�ֵ���ж�����\0Ҳ��ֵ��
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
//	const int a = 10;//const�ǳ���������ָ�����ǿ�Ƹı�
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	const int* p = &a;//const������ߣ����ε���*p�����ܸı�*p��ֵ
//	*p = 20;//�ⲽ�д���
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;//const�����ұߣ����ε���ָ�����p���ܸı�*p��ֵ�����ܸı�p��ֵ
//	*p = 20;
//	int b = 30;
//	printf("%d\n", a);
//	printf("%p\n", p);
//	p = &b;
//	printf("%p\n", p);
//	return 0;
//}

//������Ż�
//void my_strcpy(char* a, const char* b)//���const��ֹ��*b���ı䣬�����渳ֵд����û����ʾ
//{
//	assert(a != NULL);
//	assert(b != NULL);
//	while (*a++ = *b++)//��ֹ���ﱻд��*b++=*a++
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


//�������Ż�
//char* my_strcpy(char* a, const char* b)
//{
//	int* d = a;
//	assert(a != NULL);
//	assert(b != NULL);
//	while (*a++ = *b++)//��bָ����ַ���������aָ��Ŀռ�,����'\0'
//	{
//		;
//	}
//	return d;
//}
//int main()
//{
//	char arr1[] = "###";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));//��ʽ����
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%p\n", arr);//��ӡ������Ԫ�ص�ַ
//	char arr1[] = "abc";
//	printf("%s\n", arr1);//�ַ�������ͨ��arr1��ӡ�ַ���
//	char arr2[] = { 'a','b','c','\0' };
//	printf("%s\n", arr2);
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abc";
//	printf("%s\n", arr1);//�������ֱ�Ӵ�ӡ�ַ��������ǲ��ܴ�ӡ��ַ����ַ��Ҫָ��
//	printf("%c\n", arr1[0]);//����Ҳ���Դ�ӡ�����ַ�
//	char* a = arr1;
//	printf("%c\n", *a);//��ӡ�����ַ�
//	printf("%s\n", a);//��ӡ�ַ���
//	printf("%p\n", a);//��ӡ��ַ
//	printf("%p", ++a);//��ӡ�ڶ����ַ���ַ
//	return 0;
//}