int main()
{
	int m,i,j,n[N],a[M];
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&n[i]);
	}
	a[0]=1;
	a[1]=2;
	for(i=0;i<m;i++)
	{
		double sum=0.0;
		for(j=1;j<=n[i];j++)
		{
			a[j+1]=a[j]+a[j-1];
			sum+=1.0*a[j]/a[j-1];
		}
		printf("%.3lf\n",sum);
	}
	return 0;
}