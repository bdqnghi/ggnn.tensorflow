void prt(int *a)
{	int i;
	for(i=0;i<5;i++)
		printf("%d%c",*(a+i),(i<4)?' ':'\n');
}
void main()
{
	int i,n,m,a[5][5],j;

	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	scanf("%d %d",&m,&n);

	if(0<=m&&m<=4&&0<=n&&n<=4)
	{	for(i=0;i<5;i++)
		{	if(i==m)prt(a[n]);
			else if(i==n)prt(a[m]);
			else prt(a[i]);
		}

	}
	else printf("error");
}
	

