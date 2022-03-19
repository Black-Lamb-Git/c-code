#include<stdio.h>

//当形循环（求阶乘）
//int main()
//{
//	int  i = 0, sum = 0 , a ;
//	printf("请输入：");
//	scanf_s("%d", &a);
//	
//	while (i <= a)
//
//	{sum = sum + i;
//	i = i + 1; }
//printf("sum = %d\n", sum);
//	return 0;
//	}


//直到形循环(求阶乘)
//int main()        
//{
//	int i = 0, sum = 0 , n;
//	printf("请输入:");
//	scanf_s("%d", &n);
//	do
//	{
//		sum = i + sum;
//		i++;
//
//	} 
//	while (i <= n);
//	printf("sum = %d\n", sum);
//}


//第4题
//int main()
//{
//	printf("Hellow world!");
//}


//第5题
//int main()
//{
//	printf("*****\n  *****\n    *****\n      *****");
//}



//比较两数大小（无交换）
//int main()
//{
//	int a, b;
//	printf("请输入两个不同的值：");
//	scanf_s("%d%d", &a, &b);
//	if (a > b)
//	{
//		printf("%d,%d\n", a, b);
//
//	}
//	else
//		printf("%d,%d\n", b, a);
//}


//两个实数比较（借助第三个变量进行交换）
//int main()
//{
//	int a, b, t;
//	printf("请输入两个实数：");
//	scanf_s("%d%d", &a, &b);
//	if (a > b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	printf("%d,%d\n", a, b);
//}




//三个实数大小比较
//int main()
//{
//	int a, b, c, t;
//	printf("请输入三个实数：");
//	scanf_s("%d%d%d", &a,&b,&c);
//	if (a > b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a > c)
//	{
//		t = a;
//		a = c;
//		c = t;
//
//	}
//	if (b > c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d,%d,%d", a, b, c);
//
//}