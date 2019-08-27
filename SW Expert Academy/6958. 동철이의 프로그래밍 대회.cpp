#include <stdio.h>

int main(void)
{
								int testcase;
								scanf("%d", &testcase);
								for (int tc = 1; tc <= testcase; tc++)
								{
																int n, m;
																int max = 0;
																int cnt = 0;
																int arr[21][21] = { 0, };
																int sum[21] = { 0, };
																scanf("%d %d", &n, &m);
																for (int i = 0; i < n; i++)
																{
																								for (int j = 0; j < m; j++)
																								{
																																scanf("%d", &arr[i][j]);
																								}
																}
																for (int i = 0; i < n; i++)
																{
																								for (int j = 0; j < m; j++)
																								{
																																sum[i] += arr[i][j];
																								}
																}
																for (int i = 0; i < n; i++)
																{
																								if (max < sum[i])
																								{
																																cnt = 1;
																																max = sum[i];
																								}
																								else if (max == sum[i])
																								{
																																cnt++;
																								}
																}
																printf("#%d %d %d\n", tc, cnt, max);
								}
								return 0;
}
