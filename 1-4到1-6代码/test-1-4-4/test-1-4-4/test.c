#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>










//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s", &password);
//		if (strcmp(password,"123456")==0)//等号不能用来比较两个字符串是否相等，应该使用一个库函数-strcmp
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (3 == i)
//		printf("三次密码均错误，退出程序\n");
//	return 0;
//}










//int main()
//{
//	//char arr[]="abc";
//	//[a  b  c  \0]
//	// 0  1  2   3
//	//c 的下标 4-2
//	char arr1[] = "welcome to bit!!!";//20个字符,21个下标
//	char arr2[] = "#################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0])-2;
//	int right = strlen(arr1) - 1;//	printf("%d\n", strlen(arr1)),#20
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//休息一秒
//		Sleep(100);
//		system("cls");//执行系统命令的一个函数-cls-清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}




//int main()//二分法查找，查找次数为log2（n）次。
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 8, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int mid = (left + right) / 2;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("find it! 下标是：%d\n", mid);
//			break;
//		}
//		
//	}
//	if (left > right)
//	{
//		printf("lost!\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 6, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("find it! 下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("lost!\n");
//	}
//
//	return 0;
//}//效率低


//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret =ret* n;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for ( n = 1; n <=10; n++)
//	{
//		ret = 1;
//		for (i=1; i <= n; i++)
//		{
//			ret = ret*i;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);//100在一个整型放不下，溢出了
//	for (i =1; i <=n; i++)
//	{
//		ret = ret*i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}




//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			continue;//endless loop
//		printf("%d ", i);
//		i++;
//	} 
//	while (i<=10);
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int k = 0;
//	for ( i = 0,k=0; k =1; i++,k++)//中间变成了赋值而不是判断，赋值之后为0假，不进入循环，为1或其他，则死循环
//	{
//		k++;
//	}
//	return 0;
//}

//int main()
//{
//	int x, y;
//	for (x=0,y=0; x<2&&y<5; x++,y++)//一个变体
//	{
//			printf("hehe\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (;i<10;i++)
//	{
//		for (; j < 10;j++)//省略了，不会再初始化，进行10次之后，j==10，并且没有被再次初始化，判断为假
//		printf("hehe\n");
//	}
//	return 0;
//}


//int main()
//{
//	for (;;)//初始判断调整都可以省略，但是判断部分省略就会判断为恒为真。如果不是很熟练，不要随便省略
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}




//int main()
//{
//	//int i = 0;//初始化
//	//while (i <= 10)//判断
//	//{
//	//	i++;//调整
//	//}
//	int i = 0;//初始化
//	//函数初始化  判断 调整
//	for (i = 1; i <=10; i++)//建议不要在for循环体内改变变量，否则容易造成死循环
//	{
//		if (5 <= i)//注意变量和符号方向
//			continue;
//		printf("%d\n", i);
//	}
//	//建议for循环使用前闭后开区间的写法，上面的是前后都是闭区间，for (i = 0; i <10; i++)是前闭后开
//	//其代表10次循环，10个元素，10次打印
//	return 0;
//}




//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}




//int main()
//{
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}
//	int ch = 0;
//	int ret = 0;
//	char passward[20] = { 0 };
//	printf("请输入密码>:");
//	scanf("%s", passward);//输入密码123456 ABCD然后回车，并储存在password里面，scanf只会读取空格前面的内容
//	//缓冲区还剩一一个\n
//	//读取一下\n
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("Y/N:>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//
//
//	return 0;
//}


//int main()
//{
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}
//	int ret = 0;
//	char passward[20] = { 0 };
//	printf("请输入密码>:");
//	scanf("%s", passward);//输入密码123456然后回车，并储存在password里面
//	//缓冲区还剩一一个\n
//	//读取一下\n
//	getchar();
//	printf("Y/N:>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//
//
//	return 0;
//}
//getchar接收键盘输入的一个字符，putchar输出键盘输入的一个字符

//int main()
//{
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}
//	int ret = 0;
//	char passward[20] = { 0 };
//	printf("请输入密码>:");
//	scanf("%s", passward);//输入密码，并储存在password里面。在输入缓冲区里面1234\n，而scanf只取走了1234，getchar取走了\n
//	printf("Y/N:>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//
//
//	return 0;//#报错‘\n’的ASCII码值是10
//}



