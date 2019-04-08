int main()
{
	int i,j,k,a[100][100]={0},m,n,b[10000]={0};
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		j=0;
		k=i;
		while(k!=-1&&j<m)
		{
			printf("%d\n",a[j][k]);
			j++;
			k--;
		}
	}
	for(i=1;i<m;i++)
	{
		j=n-1;
		k=i;
		while(k<m&&a[k][j]!=0)
		{
			printf("%d\n",a[k][j]);
			k++;
			j--;
		}
	}
	return 0;
}