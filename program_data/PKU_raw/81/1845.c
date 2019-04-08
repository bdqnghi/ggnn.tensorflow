

int main()
{
	int n,m,i,j,flag=0;
    int a[5][5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d%d",&n,&m);
	
	if(n<5&&m<5)
	{
	
	for(j=0;j<5;j++)
	{int tmp;
	tmp=a[n][j];
		a[n][j]=a[m][j];
		a[m][j]=tmp;
	}
	
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(j==0)
	printf("%d",a[i][j]);
			else printf(" %d",a[i][j]);
		}
		printf("\n");
	}
	}
	else printf("error");

	return 0;
}
