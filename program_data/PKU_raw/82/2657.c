int main()
{
	int n,xy[100][2],i,j,k,t;
	int xs[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&xy[i][0]);
		scanf("%d",&xy[i][1]);
	}
	for(k=0;k<100;k++)
	{
		xs[k]=0;
	}
	if(xy[0][0]>=90&&xy[0][0]<=140&&xy[0][1]>=60&&xy[0][1]<=90)
	{
		xs[0]=1;
	}
	for(i=1;i<n;i++)
	{
		if(xy[i][0]>=90&&xy[i][0]<=140&&xy[i][1]>=60&&xy[i][1]<=90)
		{
			if(xs[i-1]+1>xs[i])
			{
				xs[i]=xs[i-1]+1;
			}
		}
	}
	for(j=n-1;j>0;j--)
	{
		for(i=0;i<j;i++)
		{
			if(xs[i]>xs[i+1])
			{
				t=xs[i];
				xs[i]=xs[i+1];
				xs[i+1]=t;
			}
		}
	}
	printf("%d\n",xs[n-1]);
	return 0;
}






