#include<stdio.h>
//输入两个数，求其绝对值的和
//int main()
//{
//	int a, b, sum = 0;
//	printf("please enter two numbers:");
//	scanf_s("%d %d", &a, &b);
//	if (a < 0 && b < 0)
//	{
//		a = a * -1;
//		b = b * -1;
//	}
//	if (a < 0 && b>0)
//	{
//		a = a * -1;
//		b = b * 1;
//	}
//	if (a > 0 && b < 0)
//	{
//		a = a * 1;
//		b = b * -1;
//	}
//	sum = a + b;
//	printf("answer:%d\n", sum);
//	return 0;
//}  


//求两数和
//int main()
//{
//	int a, b, sum;
//	printf("please enter two numbers:");
//	scanf_s("%d %d", &a, &b);
//	sum = a + b;
//	printf("answer:%d\n", sum);
//	return 0;
//}




//int main()
//{
//	int n = 1, k;
//	double sn = 0.0;
//	scanf_s("%d", &k);
//	for (; ; n++)
//	{
//		sn = sn + 1.0 / n;
//		if (sn > k * 1.0)
//			break;
//	}
//	printf("%d", n);
//	return 0;
//}


//输入三个整数，输出其最大值
//int main()
//{
//	int a, b, c;
//	printf("Please enter three number:");
//	scanf_s("%d%d%d", &a, &b, &c);
//	if (a > b && a > c)
//	{
//		printf("max is:%d\n", a);
//	}
//	if (b > c && b > a)
//	{
//		printf("max is:%d\n", b);
//	}
//	if (c > a && c > b)
//	{
//		printf("max is:%d\n", c);
//	}
//	return 0;
//}


//输入一个1000以内的正整数，求其平方根，并只输出整数部分
//#include<math.h>
//int main()
//{
//	int n,t = 0;
//	printf("Please enter a number:");
//	scanf_s("%d", &n);
//	while (n > 1000)
//	{
//		printf("Please enter a number again:");
//		scanf_s("%d", &n);
//	}
//	t = sqrt(n);
//	printf("%d\n", t);
//}