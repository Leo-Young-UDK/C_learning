#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//交换两个变量，可以用按位异或运算
//a=a^b
//b=a^b
//a=a^b
//效率低可读性低，但是考察思维能力，属于面试题

//leetcode算法题,几百道，简单中等难。

//找出只出现一次的数，其它数都出现两次

//int main()
//{
//	int arr[] = { 1, 1, 2, 2, 3, 4,  3, 5, 5, 4, 6, 6, 7, 7,8 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		int count = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("一个数：%d\n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}

//异或运算法则
//a^a=0；自身异或为0
//a^b^a=a^a^b；满足交换律
//0^a=a；与0异或为自身
//上面的例子只要把所有元素一起异或，最后的数就是单身狗（仅对题目本身有效）




