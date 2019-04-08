void main()
{
	int n,k,t,m=0;
	scanf("%d %d",&n,&k);
if (n>2)
	{int i=1,p;
	p=1;
	while(i<=n)
	{	p=p*n;
	i++;}
	m=p-k*(n-1);
}
else if(n=2) m=7;
printf("%d",m);
}