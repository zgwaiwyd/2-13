#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	if (1 == day)
//		printf("monday\n");
//	else if (2 == day)
//		printf("tuseday\n");
//	else if (3 == day)
//		printf("wendesday\n");
//	else if (4 == day)
//		printf("thursday\n");
//	else if (5 == day)
//		printf("friday\n");
//	else if (6 == day)
//		printf("saturday\n");
//	else if (7 == day)
//		printf("sunday\n");
//	else
//		printf("err\n");
//	return 0;
//	
//}
//{
//	int i = 0;
//	while (i <= 100)
//	{
//		printf("%d\n", i);
//		i += 2;
//	}
//	return 0;
//
//}
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d \n", i);
//		i += 2;
//	}
	//int i = 0;
	//while (i <= 100)
	//{
	//	if (i%2==0)
	//	if (i % 2 != 0)
	//		printf("%d ", i);
	//	i++;
	//}
//	return 0;
//}
//switch���
//#pragma warning(disable:4996) 
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int day=0;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("monday\n");
//		break;
//	case 2:
//		printf("tuseday\n");
//		break;
//	case 3:
//		printf("wednesday\n");
//		break;
//	case 4:
//		printf("turthay\n");
//		break;
//	case 5:
//		printf("friday\n");
//		break;
//	case 6:
//		printf("saturday\n");
//		break;
//	case 7:
//		printf("sunday\n");
//		break;
//	default:
//		printf("����һ��1-7����\n");
//		return 0;
//		
//	}
//	return 0;
//}
//case ���γ������ʽ
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case1:
//		printf("������\n");
//		break;
//	case2:
//		printf("��Ϣ\n");
//		break;
//
//		
//	}
//	return 0;
//}
#include <stdio.h>
//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("����1-7����\n");
//		break;
//		return 0;
//	}
//	return 0;
//
//}
//ѭ�����
//int main ()
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//	/*	if (i == 5)
//			break;*/
//		if (i == 5)
//			continue;//û��5
//		printf("i= %d\n", i);
//		//i++;
//	/*	if (i == 5)
//			break;*/
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int ch = getchar();
//	putchar(ch );
//	printf("\n%c\n", ch);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	//ctrl+z
//	//EOF - end of file -> -1
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//}
//#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("���������룺>");
//	scanf("%s", password);//�������벢�����password������
//	//����������\n��������ַ�
//	//��ȡ�ɾ�
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ�ϣ�Y/N):>");
//	ret = getchar();
//		if(ret=='y')
//		{ 
//			printf("ȷ�ϳɹ�\n");
//		}
//		else
//		{
//			printf("����ȷ��\n");
//		}
//	return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	if (2 == a)
//		printf("good");
//	return 0;
//}
//int main()
//{
//	char ch[20] = { 0 };
//	//char m[20] = { "����Ұ���" };
//	printf("\n���������Ұ���\n");
//	scanf("%s", ch);                      
//	//while (a == m)
//	//{
//	//	printf("\n���������Ұ���\n");
//	//	scanf("%s", ch);
//	//}
//	printf("\n��������\n");
//	return 0;
//}
//int main()
//{
//	char ch[20] = { 0 };
//	printf("���������Ұ���:>\n\n");
//	scanf("%s", ch);
//	printf("\n��������\n");	
//	return 0;
//}
//{
//	int long ch = 0;
//	printf("���������Ұ���:>");
//	long ch = getchar();
//	while ((long ch=getchar()) !=  '����Ұ���')
//	{
//		printf("���������Ұ���\n");
//	}
//	printf("��������\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char ch[] = { 0 };
//	printf("gegeaiwo ");
//	getchar();
//	while((ch = getchar())!= gegeaiwo)
//
//}
//#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//for(i=1//��ʼ��;i<=10//�ж�;i++//����)
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	//��ʼ�����жϣ� ����
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//	}
//	return 0;
//}
//����������ѭ���ڲ�
//	for (i = 1; i <= 10; i++)
//	{
//		if (i = 5)//�����Ǹ�ֵ�����ڵ���
//			continue;
//		printf("%d\n", i);
//	}
//	return 0;
//}
//#include<>


