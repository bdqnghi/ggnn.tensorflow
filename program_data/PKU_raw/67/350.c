int main()
{
	int n,sz[100][2],i,j;
	float a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&sz[i][j]);
		}
	}
	a=(float)sz[0][1]/sz[0][0];
	for(i=1;i<n;i++)
	{
		if((float)sz[i][1]/sz[i][0]-a>0.05)
		{
			printf("better\n");
		}
		if(a-(float)sz[i][1]/sz[i][0]>0.05)
		{
			printf("worse\n");
		}
		if(a-(float)sz[i][1]/sz[i][0]<=0.05&&(float)sz[i][1]/sz[i][0]-a<=0.05)
		{
			printf("same\n");
		}
	}
	return 0;
}