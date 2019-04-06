#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//对于有序（升序）数组a[]来说，要查找一个数据key
//如果key>中间的数，那么就让key在另一半中继续查找，
//重复此步骤
int  main()
{
	int a[] = { 2,3,5,6,7,8,9 };
	int left = 0;
	int right = sizeof(a) / sizeof(a[0])-1;//记录最后一个元素的下标
	int mid = 0;
	int key;
	scanf("%d", &key);
	mid = (left + right) / 2;
	while (left <= right)
	{
		if (key > a[mid])
		{
			left = mid;
			mid = (left + right) / 2;
		}
		else if (key < a[mid])
		{
			right = mid;
			mid = (left + right) / 2;
		}
		else
			break;
	}
	printf("%d", mid);
	system("pause");
	return 0;
}