main()
{
	int num,i,j,k,a[2][100000],m,n;
	scanf("%d",&num);
	for(i=0;i<=num-1;i++)
	{
		a[0][i]=0;
		a[1][i]=0;
	}
	for(;;)
	{
		scanf("%d %d",&m,&n);
		if(m==0&&n==0)
			break;
		else 
		{
			a[0][m]=a[0][m]+1;
			a[1][n]=a[1][n]+1;
		}
	}
	for(i=0;i<=num-1;i++)
	{
		if(a[0][i]==0&&a[1][i]==num-1)
			printf("%d",i);
	}
}