int main()
{
	int n,m,i,j;
	double a,b,e[3000],sum,num;
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		scanf("%d",&n);
		e[1]=1;
		e[2]=2;
		num=e[2]/e[1];
		for(j=3;j<=n+1;j++)
		{
			e[j]=e[j-1]+e[j-2];
			num+=e[j]/e[j-1];
		}
		printf("%.3lf\n",num);
	}
	return 0;
}


