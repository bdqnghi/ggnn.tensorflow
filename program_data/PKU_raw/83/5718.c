int main()
{
	int n,num1[10],i,num2[10];
	double sum[10],sum1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&num1[i]);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num2[i]);
		if(num2[i]<60)
			sum[i]=0.0;
		else if(num2[i]<=63)
			sum[i]=1.0;
		else if(num2[i]<=67)
			sum[i]=1.5;
		else if(num2[i]<=71)
			sum[i]=2.0;
		else if(num2[i]<=74)
			sum[i]=2.3;
		else if(num2[i]<=77)
			sum[i]=2.7;
		else if(num2[i]<=81)
			sum[i]=3.0;
		else if(num2[i]<=84)
			sum[i]=3.3;
		else if(num2[i]<=89)
			sum[i]=3.7;
		else if(num2[i]<=100)
			sum[i]=4.0;
	}
	double sum2=0;
	sum1=0;
	for(i=0;i<n;i++)
	{
		sum1=(double)num1[i]+sum1;
		sum2=(double)num1[i]*sum[i]+sum2;
	}
	sum2=(double)sum2/sum1;
	printf("%.2f",sum2);
}