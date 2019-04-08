int main()
{
	int n,m[1000],i,j,s[1000],q[1000];
	double c[1000],S=0;
	scanf("%d",&n);
    s[0]=2,s[1]=3,q[0]=1,q[1]=2;
	for(i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m[i];j++)
		{
			s[j+2]=s[j+1]+s[j];
			q[j+2]=q[j+1]+q[j];
			c[j]=0.00001*100000*s[j]/q[j];
		}
		for(j=0;j<m[i];j++)
		{
			S=S+c[j];
		}
		printf("%.3lf\n",S);
S=0;
	}
	return 0;
}
