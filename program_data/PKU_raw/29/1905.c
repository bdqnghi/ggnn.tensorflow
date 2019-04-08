int main()
{
	int i,n,m;
	double s,f[100];
	scanf("%d",&m);
	while(m--)
	{
	scanf("%d",&n);

	f[1]=1;f[2]=2;
	for(i=3;i<=n+1;i++) 
	{
		f[i]=f[i-2]+f[i-1];
	}
	s=0;
	for(i=1;i<=n;i++)
	{
		s+=f[i+1]/f[i];
	}

    printf("%.3lf\n",s);
	}
	return 0;
}