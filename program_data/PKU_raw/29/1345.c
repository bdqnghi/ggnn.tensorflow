int main()
{
	int i,m,n,j;
	float sl[1000],add[1000];
	scanf("%d",&m);
	for(j=0;j<m;j++)
	{
		scanf("%d",&n);
		sl[0]=1;
		sl[1]=2;
		add[j]=0;
		for(i=0;i<n;i++)
		{
			add[j]=sl[i+1]/sl[i]+add[j];
			sl[i+2]=sl[i]+sl[i+1];
		}
	}
	for(j=0;j<m;j++)
	{
		printf("%.3f\n",add[j]);
	}
	return 0;
}
