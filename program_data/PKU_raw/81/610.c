int f(int a[5][5],int n,int m)
{
	if((0<=n&&n<5)&&(0<=m&&m<5))
	{
		int i,temp;
		for(i=0;i<5;i++)
		{
			temp=a[m][i];
			a[m][i]=a[n][i];
			a[n][i]=temp;
		}
		return(1);
	}
	else
		return(0);
}
main()
{
	int a[5][5];
	int n,m,i,j,k;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
    scanf("%d %d",&n,&m);
	k=f(a,n,m);
	if(k==1)
	{
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				if(j!=0)
					printf(" ");
				printf("%d",a[i][j]);
			}
			printf("\n");
		}
	}
	else
		printf("error\n");
}
