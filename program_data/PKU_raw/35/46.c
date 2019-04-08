void find(int a[8][8],int m,int n)
{
	int i,j,b,k,s,min[8];
	for (i=0;i<m;i++)
	{
		k=0;
		for (j=1;j<n;j++)
			if (a[i][k]<a[i][j]) k=j;
		min[i]=k;
	}
	for (j=0;j<n;j++)
	{
		b=0;
		for (k=0;k<m;k++)
		{
			if (min[k]==j) 
			{
				s=k;
				b=1;
				for (i=0;i<m;i++)
					if (a[i][j]<a[s][min[s]]) 
					{
						b=0;
						break;
					}
				if (b)
				{
					printf("%d+%d",s,min[s]);
					break;
				}
			}
			if (b) break;
		}
		if (b) break;
	}
	if (b==0) printf("No");
}

void main()
{
	int a[8][8];
	int m,n,i,j;
	scanf("%d,%d",&m,&n);
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	find(a,m,n);
}