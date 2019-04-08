int main()
{
	int k,i,n[100],j;
    double sum=0,x[1000],sum1,sum2=0,ave=0;
		double s;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		sum=0;
		ave=0;
		sum2=0;
		scanf("%d",&n[i]);
		for(j=0;j<n[i];j++)
		{
			scanf("%lf",&x[j]);
			sum=sum+x[j];
		}
			ave=sum/n[i];
			for(j=0;j<n[i];j++)
			{
				sum2=(double)(sum2+pow(x[j]-ave,2));
				sum1=(double)(sum2/n[i]);
				s=sqrt(sum1);
			}

			printf("%.5lf\n",s);
	}
	
	return 0;
}

