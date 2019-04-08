int main()
{
	int min(int a,int b);
	int max(int a,int b);
	int a[100][100],i,j,m,n,begin,end;
	scanf("%d%d",&m,&n);
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for (i=0;i<=m+n-2;i++)
		for (j=max(0,i-n+1);j<=min(m-1,i);j++)
			printf("%d\n",a[j][i-j]);
	return 0;
}
int min(int a,int b)
{
	return a<b? a:b;
}
int max(int a,int b)
{
	return a>b? a:b;
}
