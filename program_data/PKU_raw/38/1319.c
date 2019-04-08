int main()
{
	int n1;
	scanf("%d",&n1);
	int i;
	for(i=0;i<n1;i++)
	{
		int n2;
		scanf("%d",&n2);
		double a[100];
		double sum=0;
		double avg;
		int j;
		for(j=0;j<n2;j++)
		{
			scanf("%lf",&a[j]);
			sum=sum+a[j];
		}
		double temp;
		temp=(double)n2;
		avg=sum/temp;
		
		double s,t=0;
		int k;
		for(k=0;k<n2;k++)
		{
			t=t+(a[k]-avg)*(a[k]-avg);
		}
		s=sqrt(t/n2);
		printf("%.5f\n",s);
	}
	return 0;	
}