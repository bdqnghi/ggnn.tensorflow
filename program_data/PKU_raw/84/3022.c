int main()
{
	int n;
	scanf("%d", &n);
	int max;
	scanf("%d", &max);
	int lmax;
	scanf("%d", &lmax);
	if(max<lmax)
	{
		max=lmax;
		lmax=max;
	}
    int a;
	int i;
	for(i=0;i<(n-2);i++)
	{
		scanf("%d", &a);
	    if(a>max)
		{
			lmax=max;
		     max=a;
		}
	    else if(a>lmax)
		{
		     lmax=a;
		}
	}
	printf("%d\n", max);
	printf("%d", lmax);
	return 0;
}