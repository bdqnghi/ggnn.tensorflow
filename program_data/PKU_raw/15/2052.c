
int main(){
	int a[1024][1024],i,j,n,c1,c2,k1,k2;
	scanf("%d",&n);
	for(i=0;i<1024;i++)
	{
		for(j=0;j<1024;j++)
		{
			a[i][j]=1;
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[i][j]==0&&a[i+1][j]==0&&a[i][j+1]==0)
			{
				c1=i+1;
				k1=j+1;
			}
			if(a[i][j]==0&&a[i-1][j]==0&&a[i][j-1]==0)
			{
				c2=i;
				k2=j;
			}
		}
	}
	printf("%d\n",(c2-c1)*(k2-k1));
	return 0;
}
