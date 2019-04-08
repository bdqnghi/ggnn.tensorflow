int main()
{
    int a[100],b[100],m,n[100],i,j;
	double result[100];

	scanf("%d",&m);

	for(i=0;i<m;i++)
	{
		scanf("%d",&(n[i]));
	}
	
	a[0]=2;
	b[0]=1;
	result[0]=(double)a[0]/(double)b[0];

	for(j=0;j<m;j++)
	{
		for(i=1;i<n[j];i++)
		{
			a[i]=a[i-1]+b[i-1];
			b[i]=a[i-1];
			result[i]=result[i-1]+(double)a[i]/(double)b[i];
		}
		
		printf("%.3lf\n",result[i-1]);
	}
	return 0;
}