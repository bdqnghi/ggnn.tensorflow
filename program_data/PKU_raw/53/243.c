void main()
{
	int A[300];
	int n,i,j,k,t,num;
	num=0;
	scanf("%d",&n);
	for (i=0;i<=(n-1);i++)
	{
		scanf("%d",&A[i]);
	}
	for (i=0;i<=(n-1);i++)
	{
		for (j=0;j<i;j++)
		{
			if (A[j]==A[i])
			{
				A[i]=0;
				num=num+1;
				break;
			}
		}
	}
	for (j=0;j<=n-1;j++)
	{
		for (i=0;i<n-1-j;i++)
		{
			if (A[i]==0)
			{
				t=A[i];
				A[i]=A[i+1];
				A[i+1]=t;
			}
		}
	}
	printf("%d",A[0]);
	for (i=1;i<=(n-num-1);i++)
	{
		printf (",%d",A[i]);		
	}
		
}


