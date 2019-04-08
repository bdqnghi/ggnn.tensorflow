int n,a[15];
double ck(int x)
{
	if(x>=90) return 4.;
	if(x>=85) return 3.7;
	if(x>=82) return 3.3;
	if(x>=78) return 3.;
	if(x>=75) return 2.7;
	if(x>=72) return 2.3;
	if(x>=68) return 2.;
	if(x>=64) return 1.5;
	if(x>=60) return 1.;
	return 0;
}
int main()
{
	while(scanf("%d",&n)==1)
	{
		int sum1=0;
		double sum2=0;
		for(int i=0;i<n;i++) 
		{
			scanf("%d",a+i);
			sum1+=a[i];
		}
		for(int i=0;i<n;i++)
		{
			int tmp;
			scanf("%d",&tmp);
			sum2+=ck(tmp)*a[i];
		}
		
		printf("%.2f\n",sum2/sum1);
	}
	return 0;
}
