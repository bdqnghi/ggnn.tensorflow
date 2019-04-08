/* Author: Yahoo */
/* Date: 2011-10-12 */
/* Function: random access to files */
/*#include<stdio.h>
int main()
{
	if(4==5,5)
		printf("good\n");
	return 0;
}*/
int main()
{
	int n, sum = 0, mat[100];
	memset(mat, 0, sizeof(mat));
	while(scanf("%d",&n),n != -1)
	{
		if(n == 0)
		{
			printf("%d\n", sum);
			sum = 0;
			memset(mat, 0, sizeof(mat));
		}
		else if(n > 49)
		{
			mat[n] = 1;
			if(mat[n>>1])
				sum++;
		}
		else
		{
			mat[n] = 1;
			if(mat[n<<1])
				sum++;
			if(!(n&1) && mat[n>>1])
				sum++;
		}
	}
	return 0;
}