int main(int argc, char* argv[])
{
	int k;
	scanf("%d",&k);
	int i;
    for(i=0;i<k;i++)
	{
		double x[1000];
		int n;
		scanf("%d",&n);
		int j;
		double sum=0;
		for(j=0;j<n;j++)
		{
            scanf("%lf",&x[j]);
			sum+=x[j];
		}
		double a=sum/n;
		double sum2=0;
        for(j=0;j<n;j++)
		{
            sum2+=(x[j]-a)*(x[j]-a);
		}
		double S=sqrt(sum2/n);
		printf("%.5lf\n", S);
	}


	return 0;
}

