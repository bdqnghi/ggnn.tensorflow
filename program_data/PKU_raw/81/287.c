void main()
{
	int a[5][5];
	int i=0,j=0,m,n,k,p=0;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
			scanf("%d",&a[i][j]);
	}
	scanf("%d %d",&m,&n);
	if(f(m,n)==0)
		printf("error");
	if(f(m,n)==1)
	{
		for(p=0;p<=4;p++)
		{
			k=a[m][p];
			a[m][p]=a[n][p];
			a[n][p]=k;
		}
		i=0;
		j=0;
		for(i=0;i<=4;i++)
		{
			for(j=0;j<=4;j++)
			{
				if(j!=4)
					printf("%d ",a[i][j]);
				else
					printf("%d\n",a[i][j]);
			}
		}
	}
}
int f(int a,int b)
{
	int c;
	if(a<=4&&b<=4&&a!=b)
		c=1;
	else
		c=0;
	return(c);
}
