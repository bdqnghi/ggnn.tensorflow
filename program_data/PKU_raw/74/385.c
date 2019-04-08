int prime(int n)
{
	int p, i;
	p=1;
	for(i=2;i<=sqrt(n);i++)
		if(n%i==0)
		{
			p=0;
			break;
		}
	return(p);
}
int back(int n)
{
	int q, i, len, l, s, t;
	q=1;
	len=log10(n)+1;
	l=len;
	for(i=1;i<=l/2;i++)
	{
		s=n/pow(10,len-1);
		t=n%10;
		if(s!=t)
		{
			q=0;
			break;
		}
		n=(n-(s)*pow(10,len-1))/10;
		len-=2;
	}
	return (q);
}
void main()
{
	int n, m, i;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
		if(prime(i)*back(i)==1)
		{
			printf("%d",i);
			break;
		}
	if(i==n+1)
		goto end;
	for(i=i+1;i<=n;i++)
		if(prime(i)*back(i)==1)
			printf(",%d",i);
	printf("\n");
	goto ed;
end:printf("no\n");
ed:n=n;
}
