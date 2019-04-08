int main()
{

int i,j,m,n,a[101][101],k=0;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;k!=m*n;i++)
	{
		for(j=i;j<n-i;j++)
		{
		printf("%d\n",a[i][j]);
		k++;
		if(k==m*n)
		break;
		}
		if(k==m*n)
		break;

        for(j=i+1;j<m-i;j++)
		{
		printf("%d\n",a[j][n-1-i]);
		k++;
		if(k==m*n)
		break;
		}
		if(k==m*n)
		break;

		for(j=n-i-2;j>=i;j--)
		{
		printf("%d\n",a[m-1-i][j]);
		k++;
		if(k==m*n)
		break;
		}
		if(k==m*n)
		break;

        for(j=m-i-2;j>i;j--)
		{
		printf("%d\n",a[j][i]);
		k++;
		if(k==m*n)
		break;
		}
		if(k==m*n)
		break;
	}
	return 0;
}
