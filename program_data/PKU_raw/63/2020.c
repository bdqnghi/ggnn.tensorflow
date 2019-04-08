int main() 
{
	int a[100][100],b[100][100],c[100][100]={0};
	int i,j,k,n,m,p,q;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d %d",&p,&q);
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<q;j++)
		{
			for(k=0;k<m;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<q;j++)
		{
		    if(j==0)
		    {
			printf("%d",c[i][j]);
		    }
			else
			{
			printf(" %d",c[i][j]); 
			 }
		}
		printf("\n");
	}
} 