int main()
{
	int m,n,i,j,c[100];
	float a[100],b[100],sum=0.000;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&n);
		c[i]=n;
	}
	for(i=0;i<m;i++)
	{
		sum=0.000;
		for(j=0;j<c[i];j++)
		{
			if(j==0)
			{
				a[j]=2;
				b[j]=1;
			}
			else
			{
				a[j]=a[j-1]+b[j-1];
				b[j]=a[j-1];
			}
			sum=sum+a[j]/b[j];
		}
		printf("%.3f\n",sum);
	}
	return 0;
}
