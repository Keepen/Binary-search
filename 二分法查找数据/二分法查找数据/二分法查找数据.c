#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//����������������a[]��˵��Ҫ����һ������key
//���key>�м��������ô����key����һ���м������ң�
//�ظ��˲���
int  main()
{
	int a[] = { 2,3,5,6,7,8,9 };
	int left = 0;
	int right = sizeof(a) / sizeof(a[0])-1;//��¼���һ��Ԫ�ص��±�
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