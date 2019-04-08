
int main()
{
	
	int a[N][N];
	int i,j,k,q;
	int count1,count2,num=0;
	for (i=0;i<N;i++)
	{
		for (j=0;j<N;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for (i=0;i<N;i++)
	{
		for (j=0;j<N;j++)
		{
			count1=0;
			for (q=0;q<N;q++)
			{
				if (a[i][j]>=a[i][q])
				{
					count1++;
				}
			}
			if (count1==N)
			{
				count2=0;
				for (k=0;k<N;k++)
				{
					if (a[i][j]<=a[k][j])
					{
						count2++;
					}
				}
				if (count2==N)
				{
					printf("%d %d %d\n",i+1,j+1,a[i][j]);
					num++;
				}
			}
		}
	}
	if (num==0)
	{
		printf("not found\n");
	}
	return 0;
}