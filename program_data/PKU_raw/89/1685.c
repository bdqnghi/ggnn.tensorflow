int main()
{
	int n,a[100000]={0},b[100000]={0},i=0,t=0,j,x=0,y=0,w=0;
	scanf("%d",&n);
	while(scanf("%d %d",&a[i],&b[i])!=EOF&&!(a[i]==0&&b[i]==0))
	i++;
	t=i-1;
	for(i=0;i<n;i++)
	{
		if(w==0)
		{
		for(j=0;j<=t;j++)
		{
			if(i==a[j])
				x++;
		}
		if(x==0)
		{
			for(j=0;j<=t;j++)
			{
				if(b[j]==i)
					y++;
			}
			if(y==n-1)
			{printf("%d\n",i);w++;}
		}
		}
		x=0;
		y=0;
	}
	if(w==0)
		printf("NOT FOUND\n");
	return 0;
}







