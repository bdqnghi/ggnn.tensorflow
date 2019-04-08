void main()
{
	int a[5][5];int t;
	int i,j,n,m;
	for(i=0;i<5;i++)
	{	
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d%d",&n,&m);
	if((n<5&&n>=0)&&(m<5&&m>=0)) 
	{
		for(j=0;j<5;j++)
		{
			t=a[m][j];a[m][j]=a[n][j];a[n][j]=t;
		}
		for(i=0;i<5;i++)
		{
			for(j=0;j<4;j++)
			{
				printf("%d ",a[i][j]);
			}
			if(i!=4) printf("%d\n",a[i][j]);
			else printf("%d",a[i][j]);
		}
	}
	else printf("error");
}