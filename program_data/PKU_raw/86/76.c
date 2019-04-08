int main ()
{
	int n,i,m,a[60],count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		count=0;
		int j;
		scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[j]);
		}
		j=m-1;
		while((a[j]+3*j)>60)
		{
			m--;
			j=m-1;
		}
		if((a[m-1]+3*m)<60)
		{
			count=60-3*m;
		}
		else count=a[m-1];
		printf("%d\n",count);
	}
	return 0;
}
