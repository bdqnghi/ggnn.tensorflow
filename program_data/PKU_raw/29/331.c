int main()
{
	int m,n,i,j,a[100],b[100];
	double sum;
	a[0]=2;
	a[1]=3; 
	for(j=2;j<100;j++)
	a[j]=a[j-1]+a[j-2];
	b[0]=1;
	b[1]=2;
	for(j=2;j<100;j++)
	b[j]=b[j-1]+b[j-2];
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		sum=0;
		scanf("%d",&n);
	    for(j=0;j<n;j++)
	    sum+=(double)a[j]/b[j];
		printf("%.3lf\n",sum);
	
	}
	return 0;
}
			
