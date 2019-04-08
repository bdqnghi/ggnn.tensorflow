int k, a[25], f[25][25];

int max(int a, int b)
{
	return a>b?a:b;
}

void main()
{
	int i,j;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&a[i]);
	}
	f[0][0]=a[0];
	for(i=1;i<k;i++)
	{
		for(j=0;j<k;j++)
		{
			if(j==0)
			{
				f[i][j]=max(f[i-1][j],a[i]);
				continue;
			}
			if(f[i-1][j-1]>=a[i])
				f[i][j]=max(f[i-1][j],a[i]);
			else
				f[i][j]=f[i-1][j];
		}
	}
	j=k-1;
	while(f[k-1][j]==0)
		j--;
	printf("%d",j+1);
}