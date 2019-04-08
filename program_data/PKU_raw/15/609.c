int main()
{
	int a[1000][1000];
	int n,b,c,d,e,i,j,s;
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		for(i=1;i<=n;i++)
		{
			scanf("%d",&a[i][j]);
			if((a[i][j]==0) && (a[i-1][j]!=0) && (a[i][j-1]!=0))
			{
				b=i;
				c=j;
			}
			else if((a[i][j]==0) && (a[i-1][j]==0) && (a[i][j-1]==0))
			{
				d=i;
				e=j;
			}
		}
	}
	s=(d-b-1)*(e-c-1);
	printf("%d\n",s);
	return 0;
}

