int main()
{
	int i,j,a,sum0,n,s,t,b;
	scanf("%d",&n);
	sum0=0;
	t=0;
	for(i=1;i<=n;i++)
	{s=0;
	for(j=1;j<=n;j++)
	{scanf("%d",&a);
	if(a==0)
	{sum0=sum0 + 1;
	s=s+1;}
	}
	if(s!=0)
		t=s;
	else
		t=t;}
	b=(t-2)*(sum0-2*t)/2;
	printf("%d\n",b);
	return 0;
}

