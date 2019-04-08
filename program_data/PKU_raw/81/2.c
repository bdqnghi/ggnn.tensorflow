int a[5][5];

main()
{
	int i,j,m,n;
    int exch(int a[5][5],int n,int m);
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d%d",&n,&m);
	if(exch(a,n,m)==1)
	{
		for(i=0;i<5;i++)
		{
	      	for(j=0;j<4;j++)
	    	{
	    		printf("%d ",a[i][j]);
	    	}
			printf("%d\n",a[i][j]);
    	}
	}
	else
	{
		printf("error\n");
	}
}

int exch(int a[5][5],int n,int m)
{
	int t,i;
	if(!(n>=0&&n<=4)||!(m>=0&&m<=4))
		return 0;
	else
	{
		for(i=0;i<5;i++)
		{
			t=a[n][i];
			a[n][i]=a[m][i];
			a[m][i]=t;
		}
		return 1;
	}
}