int comp(int center,int up,int left,int down,int right)
{
	if((center>=up) && (center>=left) && (center>=down) && (center>=right))
		return 1;
	else 
		return 0;
}
int main()
{
	int a[22][22],m,n,i,j,k,r;
	scanf("%d %d",&m,&n);
	for(i=0;i<=m+1;i++)
	{
		a[i][0]=-1;
		a[i][n+1]=-1;
	}
	for(i=0;i<=n+1;i++)
	{
		a[0][i]=-1;
		a[m+1][i]=-1;
	}
	for(i=1;i<m+1;i++)
	{
		for(r=1;r<n+1;r++)
			scanf("%d",&a[i][r]);
	}
	for(j=1;j<m+1;j++)				//????????
	{
		for(k=1;k<n+1;k++)
		{
			if(comp(a[j][k],a[j-1][k],a[j][k-1],a[j+1][k],a[j][k+1]))
				printf("%d %d\n",j-1,k-1);
		}
	}
	return 0;
}