void main()
{
	int inve(int x[5][5],int p,int q);
	int a[5][5],i,j,m,n;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		scanf("%d",&a[i][j]);
	}
	scanf("%d %d",&m,&n);
	inve(a,m,n);
	if (inve(a,m,n)==0)
		printf("error");
	if(inve(a,m,n)==1)
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=4;j++)
		printf("%d ",a[i][j]);
		printf("%d",a[i][5]);
		printf("\n");
	}
}
int inve(int x[5][5],int p,int q)
{
	int i, b[100];
	if(0<=p&&p<=4&&0<=q&&q<=4)
	{	p++;q++;
			for(i=1;i<=5;i++)
		{
			b[i]=x[p][i];
			x[p][i]=x[q][i];
			x[q][i]=b[i];
		}
			return(1);
	}
	else
		return(0);
}

		
	
	