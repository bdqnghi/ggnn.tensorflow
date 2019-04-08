int main()
{
	int n,a[1000][1000];
	int i,j;
	int lon,wid;
	int m;
	int c1=0,c2=0;
    lon=0,wid=0;

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
    for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==0)
			{
				c1=c1+1;
			
			if(c1>2)
			
				lon=c1;break;
			}
		}
	}
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
			if(a[i][j]==0)
			{
				c2=c2+1;
			
			if(c2>2)
			
				wid=c2;break;
			}

		}
	}
	m=(lon-2)*(wid-2);
	printf("%d\n",m);
	return 0;}
