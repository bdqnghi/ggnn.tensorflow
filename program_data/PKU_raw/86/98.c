int main()
{
	int n,m[100],i,j,a[100][10],sum;
	scanf("%d",&n);
	for(i=0;i<100;i++)for(j=0;j<100;j++)a[i][j]=100;
	for(i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
		for(j=0;j<m[i];j++)scanf("%d",&a[i][j]);
	}
	for(i=0;i<n;i++)
	{
		j=0;
		while((a[i][j]+3*(j+1))<60)j++;
		sum=60-3*j;
		if(a[i][j]+3*(j+1)<63)sum=sum-(63-a[i][j]-3*(j+1));
		printf("%d\n",sum);
	}
	return 0;
}