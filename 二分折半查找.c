#include <stdio.h>
int main ()
{
		//�۰����-���ֲ���
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("��������Ҫ���ҵ�����:> ");
	int input;
	scanf("%d", &input);
	int left = 0;
	int right = sz - 1;
	int mid = (left + right) / 2;

	while (left <= right)
	{
		if (arr[mid] > input)
		{
			right = mid - 1;
		}
		else if (arr[mid] < input)
		{
			left = mid + 1;
		}
		else
		{
			printf("�ҵ��ˣ�%d ���±�Ϊ %d ", input, mid);
			break;
		}
	}
	printf("\n");
	if (left > right)
	{
		printf("δ�ҵ������ֵ��±꣡");
	}
	return 0;
 } 
