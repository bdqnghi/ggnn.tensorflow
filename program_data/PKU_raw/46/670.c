
void main()
{
	int m,n;
	int a[100][100]={0};
	int b[100][100]={0};
	int i,j;
	int k,te;

	scanf("%d%d",&m,&n);

	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);

	int u=0;

	int tem=0;
	for(i=0;i<m*n;)
	{
		if(u%4==0)
		{
			j=tem;
			for(k=0;k<n;k++)
				if(b[j][k]==0)
				{
					printf("%d\n",a[j][k]);
					te=k;
					b[j][k]=1;
					i++;
				}
		}
		if(u%4==1)
		{
			k=te;
			for(j=0;j<m;j++)
				if(b[j][k]==0)
				{
					printf("%d\n",a[j][k]);
					tem=j;
					b[j][k]=1;
					i++;
				}
		}

		if(u%4==2)
		{
			j=tem;
			for(k=n-1;k>=0;k--)
				if(b[j][k]==0)
				{
					printf("%d\n",a[j][k]);
					te=k;
					b[j][k]=1;
					i++;
				}
		}
		if(u%4==3)
		{
			k=te;
			for(j=m-1;j>=0;j--)
				if(b[j][k]==0)
				{
					printf("%d\n",a[j][k]);
					tem=j;
					b[j][k]=1;
					i++;
				}
		}
		u++;


	}
}