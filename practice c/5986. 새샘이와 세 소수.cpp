#include <stdio.h>
#include <cmath>

int main(void)
{
	int testcase;
	scanf("%d", &testcase);
	for (int tc = 1; tc <= testcase; tc++)
	{
		int n, i;
		int temp = static_cast<int>(sqrt(999)) + 1;
		int ret = 0;
		int prime[1000] = { 0, };
		for (int i = 0; i <= 999; i++)
		{
			prime[i] = i;
		}
		prime[1] = 0;
		for (int i = 2; i <= temp; i++)
		{
			if (prime[i])
				for (int j = 2; i*j <= 999; j++)
					prime[i*j] = 0;
		}

		scanf("%d", &n);
		for (int x = 2; x <= n - 4; x++)
		{
			if (!prime[x])
				continue;
			for (int y = x; y <= (n - x - 2); y++)
			{
				if (!prime[y])
					continue;
				int z = n - x - y;
				if (y > z)
					break;
				if (prime[z])
					ret++;
			}
		}
		printf("#%d %d\n", tc, ret);
	}
	return 0;
}
