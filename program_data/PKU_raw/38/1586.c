int main()
{
	int n,i,k,m;
	double a[100],s[100],x,b;
    scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&n);
		x=0;
		for(m=0;m<n;m++)
		{
			scanf("%lf",&(a[m]));
		    x+=a[m];
		}
		b=0;
           for(m=0;m<n;m++)
		{
		b+=(a[m]-x/n)*(a[m]-x/n);
		}
		s[i]=sqrt(b/n);
	}
	for(i=0;i<k;i++)
	{
printf("%.5lf\n",s[i]);
	}
	return 0;
}

