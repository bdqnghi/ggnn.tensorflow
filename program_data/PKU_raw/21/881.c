
int main()
{
	unsigned int i,n,a[M],flag=1;
	double ave=0,max=0;

	scanf("%u",&n);
	for (i=0;i<n;i++) 
	{
		scanf("%u",&a[i]);
		ave+=a[i];
	}
	ave=ave/n;

	for (i=0;i<n;i++)
	{
		double c;

		if ((c=fabs(ave-a[i])-max)>0 && fabs(c)>E) max+=c;
	}

	for (i=0;i<n;i++)
		if (fabs(fabs(a[i]-ave)-max)<E) 
		{
			if (!flag) printf(",");
			printf("%u",a[i]);
			if (flag) flag=0;
		}

	return 0;
}