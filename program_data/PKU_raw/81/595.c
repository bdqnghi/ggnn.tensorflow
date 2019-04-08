int a[5][5];
void main()
{
	void zz(int m,int n);
	int m,n,i,j;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
		scanf("%d %d",&m,&n);
		if(m>=0&&m<=4&&n>=0&&n<=4)
		{
		zz(m,n);
		for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d",a[i][j]);
			if(j<4)
				printf(" ");
		}
		if(i<4)
			printf("\n");
	}
		}
		else
			printf("error");
}
void zz(int m,int n)
{
	int i,j,t;
	if(m>=0&&m<=4&&n>=0&&n<=4)
	{
			for(i=0;i<5;i++)
			{
				t=a[m][i];
				a[m][i]=a[n][i];
				a[n][i]=t;
			}
	}
}