#include <stdio.h>

int main(void)
{
	int testcase, tc;
	scanf("%d\n", &testcase);
	for (tc = 1; tc <= testcase; tc++)
	{
		int n;
		int arr[11] = { 0, };
		int result = 0;
		scanf("%d", &n);
		for (int i = 1; i <= n; i++)
		{
			scanf("%d", &arr[i]);
		}
		result += arr[1];
		for (int i = 2; i <= n; i++)
		{
			result = result + arr[i] > result*arr[i] ? result + arr[i] : result * arr[i];
		}
		printf("#%d %d\n", tc, result);
	}
	return 0;
}
