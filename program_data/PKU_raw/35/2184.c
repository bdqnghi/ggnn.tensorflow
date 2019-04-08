int m,n,a[8][8];
int judge1(int i,int j)
{
	int k,u=1;
	for(k=0;k<=n-1;k++)
		if(a[i][j]<a[i][k])
			u=0;
	return u;
}
int judge2(int i,int j)
{
	int k,u=1;
	for(k=0;k<=m-1;k++)
		if(a[i][j]>a[k][j])
			u=0;
	return u;
}
void main()
{
	int i,j,u=0;
	scanf("%d,%d",&m,&n);
	for(i=0;i<=m-1;i++)
		for(j=0;j<=n-1;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<=m-1;i++)
		for(j=0;j<=n-1;j++)
		{
			if(judge1(i,j)==1&&judge2(i,j)==1)
			{
				u=1;
				printf("%d+%d",i,j);
			}
		}
	if(u==0)
		printf("No");
}
	