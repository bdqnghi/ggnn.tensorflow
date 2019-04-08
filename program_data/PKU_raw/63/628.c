

int main()
{
	int m,n,p,i,j,k,a[100][100],b[100][100],c[100][100]={0},o;
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d %d",&o,&p);
	for(i=0;i<o;i++)
	{
		for(j=0;j<p;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<p;j++)
		{
			for(k=0;k<n;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<p;j++)
		{
			if(p==1) printf("%d\n",c[i][j]);
			else if(j==0) printf("%d",c[i][j]);
			else if(j==p-1)
				printf(" %d\n",c[i][j]);
			else
				printf(" %d",c[i][j]);
		}
	}
	return 0;
}