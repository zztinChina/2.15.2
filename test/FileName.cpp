#include<stdio.h> 
void math(int arr[], int sz)
{
	int n = 1;
	for (n = 1; n <= sz - 1; n++)
	{
		int j = 0;
		for (j = 0;j<=sz-1 - n; j++)
		{
			int tem = 0;
			if (arr[j] > arr[j + 1])
			{
				tem = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;
			}
		}
	}
}

int main()
{
	int arr[] = { 1.2,4,6,5,5,4,5,6,7,7,5,544,43,3445,6,7,53,322,5,56 };
	int sz = sizeof(arr) / arr[1];
	math(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d  ", arr[i]);
	}
	return 0;
}