void trans(int m, int n)
{

	int a[5][5];
	int i,j;
	int t;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	}
	scanf("%d %d",&m,&n);
	if(n>4 || m>4)
	printf("error\n");
	else
	{
	for(j=0;j<5;j++)
	{
		t=a[m][j];
		a[m][j]=a[n][j];
		a[n][j]=t;
	}
    for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{printf("%d ",a[i][j]);}
		printf("%d\n",a[i][j]);
	}
	}
}

int main()
{
	int m,n;
	trans(m,n);
	return 0;
}
