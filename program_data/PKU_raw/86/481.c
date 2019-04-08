void main()
{
	int i,j,n,m[100],k,num[100],f[100][100],count[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
		for(j=0;j<m[i];j++)
			scanf("%d",&f[i][j]);
	}
	for(i=0;i<n;i++)
	{
		count[i]=0;
		num[i]=0;
		for(j=1;j<=60-count[i];j++)
		{
			for(k=0;k<m[i];k++)
				if(j==f[i][k])
					{
						count[i]+=3;
						break;
					}
			num[i]++;
		}
	}
	for(i=0;i<n;i++)
		printf("%d\n",num[i]);
}