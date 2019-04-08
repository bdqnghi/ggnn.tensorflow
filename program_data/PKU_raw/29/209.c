int main()
{
	int n,i,j,z[1000],m[1000],k;
	double sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&k);
		for(j=0;j<k;j++)
		{
			z[0]=2;z[1]=3;
			m[0]=1;m[1]=2;
			if(j>1)
			{
				z[j]=z[j-1]+z[j-2];
				m[j]=m[j-1]+m[j-2];
			}
			sum+=((double)z[j])/m[j];
		}
		printf("%.3lf\n",sum);
		sum=0;
	}
	return 0;
}