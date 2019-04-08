void main()
{
	int k,i,j,n,m;
	int a[15];
	scanf("%d",&k);
	while(k!=-1)
	{
        n=0;
		m=0;
		i=0;
		while(k!=0)
		{
			n++;
			a[i]=k;
			i++;
			scanf("%d",&k);
		}
		for(i=0;i<n;i++)
			for(j=i+1;j<n;j++)
			{
				if(a[i]==2*a[j]||a[j]==2*a[i])
				{
					m++;
				}
			}
		printf("%d\n",m);
		scanf("%d",&k);
	}
}