int main()
{
	int k,n,i,j;
	double f[101]={0},sum1=0,average,s,*p=f,sum2=0;
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		scanf("%d",&n);
		for(j=0;j<=n-1;j++)
		{
			scanf("%lf",&f[j]);
			sum1+=f[j];
		}
		average=sum1/n;
		sum1=0;j=0;
		while(j<=n-1)
		{
			sum2+=(p[j]-average)*(p[j]-average);
			j++;
		}
		s=sqrt(sum2/n);
		p=f;sum2=0;
		printf("%.5lf\n",s);
	}
}