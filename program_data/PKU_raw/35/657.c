int main()
{
	int h,l;
	int f1,f2,f3,f4=0;
	scanf("%d,%d",&h,&l);
	int sz[8][8];
	int i,j;
	int m,n;
	for (i=0;i<=h-1;i++)
	{
		for (j=0;j<=l-1;j++)
		{
			scanf("%d",&sz[i][j]);
		}
	}
	for (i=0;i<=h-1;i++)
	{
		for (j=0;j<=l-1;j++)
		{
			f1=1;
			f2=1;
			for (m=0;m<=h-1;m++)
			{
				if (sz[m][j]<sz[i][j])
					f1=0;
			}
			for (n=0;n<=l-1;n++)
			{
				if (sz[i][n]>sz[i][j])
					f2=0;
			}
			f3=f1*f2;
			if (f3==1)
			{
				printf("%d+%d",i,j);
				f4=1;
				
			}
		}
	}
	if (f4==0)
		printf("No");
	return 0;
}