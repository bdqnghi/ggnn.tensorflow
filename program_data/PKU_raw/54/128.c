long int power(int a,int b)
{
	int i,pro=1;
	for (i=1;i<=b;i++)
    pro*=a;
	return pro;
}
main()
{
	int n,k;
	long int m,a,p,q;
	scanf("%d %d",&n,&k);
	p=power(n-1,n-1);
	q=power(n,n-1);
	a=p-k;
	while (a<=0)
		a+=p;
	m=n*((a+k)/p*q-k)+k;
	printf("%ld\n",m);
    return 0;
}