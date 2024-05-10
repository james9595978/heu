#include <stdio.h>

int main() {
    int m, n, temp, i, j, sum;
    int temp1=0;
	scanf("%d,%d",&m,&n);
    if (m <= 0 || n <= 0 || m > 9999 || n > 9999)  
	{
        printf("error");
        return 0;
    }
    if (m > n)  
	{
        temp = m;
        m = n;
        n = temp;
    }
    for (i = m; i <= n; i++)
	{
        sum = 0;
        for (j = 1; j < i; j++) 
		{
            if (i % j == 0) 
			{
                sum=sum+j;
            }
        }
        if (sum == i&&temp1==0) 
		{
            printf("%d", i);
            temp1=1;
        }
 		else if(sum==i&&temp1==1)
		 {
		 	printf(",%d",i);
		 }        
    }
    return 0;
}
