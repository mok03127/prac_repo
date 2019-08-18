#include <stdio.h>

int main(void)
{
        int testcase,tc;
        scanf("%d\n",&testcase );
        for(tc=1; tc<=testcase; tc++)
        {
                int n,k,i;
                int arr[21] = {0,};
                scanf("%d %d\n",&n,&k);
                printf("#%d ",tc);
                int product = n*k;
                int z = 0;
                if(product %2 ==0)
                {
                        z = n*(product+1)/2;
                        for(i=0; i<k; i++)
                        {
                                printf("%d ",z);
                        }
                }
                else
                {
                        z = (n-1)*((n-1)*k+1)/2;
                        z +=(n-1)*k+1;
                        for(i=0; i<k; i++)
                        {
                                printf("%d ",z);
                        }
                }
                printf("\n");
        }
        return 0;
}
