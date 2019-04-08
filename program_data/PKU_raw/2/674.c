int main()
{
	int A[100],C[26]={0},n,i,j,m,a=0,b;
	char B[100][100],c;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d%s",&A[i],B[i]);
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<strlen(B[i]);j++)
		{
			m=B[i][j];
			C[m-65]++;
		}
	}
	for (i=0;i<26;i++)
	{
		if (a<C[i])
		{
			a=C[i];
			b=i;
		}
	}
	printf("%c\n",b+65);
	printf("%d\n",a);
	c=b+65;
	for (i=0;i<n;i++)
	{
		for (j=0;j<strlen(B[i]);j++)
		{
			if (B[i][j]==c)
			{
				printf("%d\n",A[i]);
			}
		}
	}


	return 0;
}
