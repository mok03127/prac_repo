#include <stdio.h>
#include <string.h>

int main(void)
{
	int testcase, tc;
	scanf("%d\n", &testcase);
	for (tc = 1; tc <= testcase; tc++)
	{
		int arr[50][50] = { 0, };
		int n, m, x, y;
		int cnt = 0;
		scanf("%d %d", &n, &m);
		for (int i = 0; i < m; i++)
		{
			scanf("%d %d", &x, &y);
			arr[x - 1][y - 1] = 1;
			arr[y - 1][x - 1] = 1;
		}
		for (int i = 0; i < n; i++)
		{
			int tmp[50] = { 0, };
			int idx = 0;
			for (int j = 0; j < n; j++)
			{
				if (arr[i][j])
				{
					tmp[idx] = j;
					idx++;
				}
			}
			for (int j = 0; j < idx; j++)
			{
				for (int k = 0; k < idx; k++)
				{
					if (arr[tmp[j]][tmp[k]])
						cnt++;
				}
			}
		}
		printf("#%d %d\n", tc, cnt/6);

	}
	return 0;
}
