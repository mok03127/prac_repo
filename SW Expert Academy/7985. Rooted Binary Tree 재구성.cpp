#include <stdio.h>
int main(void)
{
	int testcase;
	scanf("%d", &testcase);
	for (int tc = 1; tc <= testcase; tc++)
	{
		int k;
		int arr[1050] = { 0, };
		scanf(" %d", &k);

		for (int i = 1; i < (1 << k); i++)
		{
			scanf(" %d", &arr[i]);
		}
		printf("#%d ", tc);
		for (int i = 0; i < k; i++)
		{
			int idx = 1 << (k - i);
			for (int j = 0; j < (1 << i); j++)
			{
				printf("%d ", arr[j*idx + idx / 2]);
			}
			printf("\n");
		}


	}
	return 0;
}
