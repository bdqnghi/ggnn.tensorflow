int main(int argc, char* argv[])
{
	int n,k,i,j;
	double s,a[100],sumf,sums,b,c[100];
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		sumf=0;sums=0;b=0;
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			scanf("%lf",&a[j]);
		}
		for(j=0;j<n;j++)
		{
			sumf += a[j];

		}
		b=sumf/(double)n;
		for(j=0;j<n;j++)
		{
			c[j]=(a[j]-b)*(a[j]-b);
			sums += c[j];
		}
		s=sums/n;
		printf("%.5lf\n",sqrt(s));
		
   
	}
	return 0;
}

