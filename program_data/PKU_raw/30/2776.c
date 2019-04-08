int main()
{
	int n,a=0,m;
	scanf ("%d",&n);
	while (n>0)
	{
		if (n%7==0)
		{n--;continue;}
		if (n%10==7)
		{n--;continue;}
		else
		{m=n/10;}
		if (m%10==7)
		{n--;continue;}
		else 
		{a=n*n+a;n--;}
	}
	printf("%d\n",a);
	return 0;
}
