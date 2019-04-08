int main()
{
	int n,m,a[300][300]={0},i,j,b=0,k,l;
	
	scanf("%d %d",&m,&n);
	m+=2;
	n+=2;

	for(i=1;i<(m-1);i++)
	{
		for(j=1;j<(n-1);j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(k=1;k<(m-1);k++)
	{
		for(l=1;l<(n-1);l++)
		{
			if(a[k][l]>=a[k+1][l]&&a[k][l]>=a[k][l+1]&&a[k][l]>=a[k-1][l]&&a[k][l]>=a[k][l-1])
			{
				printf("%d %d\n",k-1,l-1);
			}
		}
	}
	
	return 0;
}