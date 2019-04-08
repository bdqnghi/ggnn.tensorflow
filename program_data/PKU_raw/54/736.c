void main()
{
	int n,k,m,s,t,a=1,b=1;
	scanf("%d %d",&n,&k);
	for(s=0;s<n;s++)
		a=a*n;
	for(t=0;t<n-1;t++)
		b=b*(n-1);
	m=(k+1)*a/b-+k-n*k;
	while((m+k*n-k)%a!=0)
		m=m+1;
	printf("%d",m);
}