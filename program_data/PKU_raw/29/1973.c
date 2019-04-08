int main()
{
	double sum;
	double chu;
	int f1[100]={2,3};
	int f2[100]={1,2};
	int i,j;
	int m,n;
	scanf("%d",&m);
	for (i=0;i<m;i++)
	{
		sum=3.5;
		scanf("%d",&n);
		if (n==1)
		{
			printf("2.000\n");
		}
		else 
		{
			for (j=2;j<n;j++)
		{
			f1[j]=f1[j-1]+f1[j-2];
			f2[j]=f2[j-1]+f2[j-2];
			chu=f1[j]*1.0/f2[j];
			sum+=chu;
		}
		printf("%.3f\n",sum);
		}
	}
	return 0;
}
