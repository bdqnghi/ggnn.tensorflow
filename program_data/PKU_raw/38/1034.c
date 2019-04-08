int main()
{
	int k,n,i,j;
	double a[1000],sum,avr,s,S;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{   
		sum=0,s=0;
		scanf("%d",&n);
		for(j=0;j<n;j++)
			scanf("%lf",&a[j]);
		for(j=0;j<n;j++)
			sum+=a[j];
		avr=sum/n;
		for(j=0;j<n;j++)
			s+=pow((a[j]-avr),2);
		S=sqrt(s/n);
		printf("%.5lf\n",S);
	}
	return 0;
}