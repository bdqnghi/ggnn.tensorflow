int cube(int a[5][5],int n,int m)
{
	int c[5],i;
	if(m<5&&m>=0&&n<5&&n>=0)
	{
		for(i=0;i<5;i++)
		{
			c[i]=a[m][i];
			a[m][i]=a[n][i];
			a[n][i]=c[i];
		}
		return 1;
	}
	else return 0;
}
void main()
{
	int a[5][5],n,m,i,j;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	scanf("%d %d",&n,&m);
	if(cube(a,n,m)==0) printf("error");
	else
	{
		for(i=0;i<5;i++)
			for(j=0;j<5;j++)
				printf("%d%c",a[i][j],(j<4)?' ':'\n');
	}
}
