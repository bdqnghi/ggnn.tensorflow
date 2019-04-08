main()
{
	int a[100][16],i,j,k,s,t;
	int d[100];
	int q,p;
	for (i=0;;i++)
	{
		for (j=0;;j++)
		{
			scanf("%d",&a[i][j]);
			if (a[i][j]==0||a[i][j]==-1)
				break;
		}
		if (j==0)
			break;
		s=0;
        for (k=0;k<j-1;k++)
		{
			for (t=k+1;t<j;t++)
			{
				p=a[i][t]-a[i][k]*2;
				q=a[i][k]-a[i][t]*2;
			    if (p==0||q==0)
				   s++;
			}
		}
		d[i]=s;
	}
	for (k=0;k<i;k++)
		printf("%d\n",d[k]);
}