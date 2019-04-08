int p(int x,int y,int c[5][5])
{
	int i=0,b;
	if(x>=0&&x<5&&y>=0&&y<5)
	{
	for(i=0;i<5;i++)
	{
		b=c[x][i];
		c[x][i]=c[y][i];
		c[y][i]=b;
	}
	return(1);
	}
	else
		return(0);
}
void main()
{
	int n,m,a[5][5],i,j,k=0,l=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	}
	scanf("%d%d",&n,&m);
	if(p(m,n,a)==1)
    	for(i=0;i<5;i++)
		{
			printf("%d",a[i][0]);
			for(j=1;j<5;j++)
			{
				printf(" %d",a[i][j]);
			}
			printf("\n");
		}
	else
		printf("error");
}