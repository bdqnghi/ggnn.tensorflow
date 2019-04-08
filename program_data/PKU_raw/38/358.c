int main(int argc, char* argv[])
{
	int m,i=0;
    scanf("%d",&m);
	while(i<m)
	{
		double a[10000];
		double x,s,sum1=0,sum2=0;
		int n,j;
		scanf("%d",&n);
		for(j=0;j<n;j++)
			scanf("%lf",&a[j]);
		for(j=0;j<n;j++)
		{
         sum1=sum1+a[j];
		}
        x=sum1/n;
        for(j=0;j<n;j++)
		{
			sum2=sum2+(a[j]-x)*(a[j]-x);
		}
        s=sqrt(sum2/n);
	     printf("%.5lf\n",s);
	     i++;
	}
    return 0;
}

