#include <stdio.h>
#include <string.h>

int main(void)
{
	int testcase, tc;
	scanf("%d\n", &testcase);
	for (tc = 1; tc <= testcase; tc++)
	{
		char data[1001] = { 0, };
		int count[1001] = { 0, };
		long long ans = 1;
		scanf("%s", data);
		if (data[0] != data[1]) count[0] = 2;
		else count[0] = 1;
		for (int i = 1; i < strlen(data) - 1; i++) {
			if (data[i - 1] != data[i] && data[i] != data[i + 1] && data[i - 1] != data[i + 1]) 
				count[i] = 3;
			else if (data[i - 1] == data[i] && data[i] == data[i + 1]) 
				count[i] = 1;
			else count[i] = 2;
		}
		if (data[strlen(data) - 1] != data[strlen(data) - 2]) 
			count[strlen(data) - 1] = 2;
		else 
			count[strlen(data) - 1] = 1;

		for (int j = 0; j < strlen(data); j++) {
			ans = (ans*count[j]) % 1000000007;
		}
		printf("#%d %d\n", tc, ans);
	}
	return 0;
}
