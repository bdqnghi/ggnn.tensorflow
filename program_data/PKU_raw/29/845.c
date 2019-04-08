int main()
{
	int n[N],m,i,j;
	double f[N],d[N],c[N],sum=0.0;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&n[i]);
	}
		for(j=0;j<m;j++)
		{
			    f[0]=2.0;
		        f[1]=3.0;
		        d[0]=1.0;
		        d[1]=2.0;
	
		for(i=2;i<n[j];i++)
		{
			
			f[i]=f[i-1]+f[i-2];
			d[i]=d[i-1]+d[i-2];
		}
	
		for(i=0;i<n[j];i++)
		{
			c[i]=f[i]/d[i];
			sum+=c[i];
		}
		printf("%.3lf\n",sum);
	    sum=0.0;
		}
		
return 0;
}