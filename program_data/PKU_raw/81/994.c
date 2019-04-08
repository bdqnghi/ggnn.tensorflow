main()
{
	int n,m,t,i,j,s;
	int exist(int n,int m);
	int a[5][5];
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
	          scanf("%d",&a[i][j]);
	scanf("%d%d",&n,&m);
	t=exist(n,m);
	if(t==1)
	{
		for(j=0;j<5;j++)
		   s=a[n][j],a[n][j]=a[m][j],a[m][j]=s;
		for(i=0;i<5;i++)
		{
		    printf("%d",a[i][0]);
			for(j=1;j<5;j++)
			printf(" %d",a[i][j]);
			printf("\n");
		}
	}
	else printf("error");
}

int exist(int n,int m)
{
	int t=0;
	if(n<=4 && m<=4)
	t=1;
	return(t);
}