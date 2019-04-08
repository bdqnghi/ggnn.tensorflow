int main()
{
	int n,m,a[10000][2],i,j,c,d[10000]={0},b=0;
	scanf("%d",&n);
	for(i=0;1;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
		if(a[i][0]==0&&a[i][1]==0)
		{
			m=i;
			break;
		}
	}
	for(i=0;i<m;i++)
	{
		d[a[i][1]]++;
	}
	for(i=0;i<m;i++)
	{
		if(d[i]>=(n-1))
		{
			c=i;
			b=1;
		}
	}
	for(i=0;i<m;i++)
	{
		if(a[i][0]==c&&a[i][1]!=c)
			b=0;

	}
	if(b==0)
		printf("NOT FOUND");
	if(b==1)
		printf("%d",c);
	

	
return 0;
}