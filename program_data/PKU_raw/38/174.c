int main()
{
	int k,n;
	int i,j;
	double sum,ave;
	double fang;
    double a[1000]={0};
	scanf("%d",&k);
	for (i=0;i<k;i++)
	{
		sum=0;
		ave=0;
		fang=0;
		scanf("%d",&n);
		for (j=0;j<n;j++)
		{
			scanf("%lf",(a+j));
			sum=sum+*(a+j);
		}
		ave=sum/n;
		for (j=0;j<n;j++)
		{
			fang=fang+pow(*(a+j)-ave,2);
		}
		fang=sqrt(fang/n);
		printf("%.5f\n",fang);
	}
	return 0;
}
