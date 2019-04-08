
int main()
{
	int n,k,i,j;
	double a[100],s=0,b=0,ss;
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		ss=0;s=0;b=0;
		scanf ("%d",&k);
		for (j=0;j<k;j++)
		{
            scanf("%lf",&a[j]);
			b=b+a[j]/k; 
		}
		for (j=0;j<k;j++)
		{
			s=s+(a[j]-b)*(a[j]-b)/k;
		}
		ss=sqrt(s);
		printf("%.5lf\n",ss);
	}
	return 0;
}
