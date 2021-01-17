#include <stdio.h>
int main ()
{
		//折半查找-二分查找
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("请输入你要查找的数字:> ");
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
			printf("找到了，%d 的下标为 %d ", input, mid);
			break;
		}
	}
	printf("\n");
	if (left > right)
	{
		printf("未找到该数字的下标！");
	}
	return 0;
 } 
