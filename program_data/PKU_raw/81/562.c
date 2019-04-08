void main()
{
	int i,j,k,m,n,a[5][5],*p;
	p=a;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	scanf("%d%d",&n,&m);
	if(m>4||n>4)printf("error");
	else
	{
		for(i=0;i<=4;i++)
		{
			k=a[m][i];
			//printf("%d!",k);
			a[m][i]=a[n][i];
			//printf("%d!",k);
			a[n][i]=k;
		}
		for(i=0;i<5;i++)
		{
			for(j=0;j<4;j++)
				printf("%d ",a[i][j]);
			printf("%d\n",a[i][4]);
		}
	}
}