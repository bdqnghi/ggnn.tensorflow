int main()
{
	int k=0;
	double p=0.0,pa=0.0,a =0.0;
	double sum2 = 0.0;
	scanf("%d",&k);
	for(int j=0;j<k;j++)
	{
		int n =0;
		scanf("%d",&n);
		double num[1000];
		double sum = 0.0;
		for(int i=0;i<n;i++)
		{
			scanf("%lf",&num[i]);
			sum += num[i];
			
		}		
		a = sum/n;
                   sum2 = 0;
		for(int m=0;m<n;m++)
		{
		    sum2 +=(num[m]-a)*(num[m]-a);
		}
		    p = sqrt((sum2)/n);
	     	printf("%.5f\n",p);
		
	}
	return 0;
}
