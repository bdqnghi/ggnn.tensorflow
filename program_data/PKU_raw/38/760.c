int main()
{
	double a[100][1000];
	int n,k,i,j;
	double s1,num,s;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%d",&k);
		for(i=0;i<k;i++)
		{
			scanf("%lf",&(a[j][i]));
		}
		num=0.0;
		for(i=0;i<k;i++)
		{
			num=num+a[j][i];
		}
		
		s=0.0;
		for(i=0;i<k;i++)
		{
			s=s+(a[j][i]-num/k)*(a[j][i]-num/k);
		}
		s1=sqrt(s/k);
		printf("%.5lf\n",s1);
	}
	return 0;
}