int k(int n)
{
	int  o,i,t,m=0;
	t=n;
	for(i=0;n!=0;i++)
	{
	m=10*m+n%10;
	n=n/10;
	}
	if(m==t)
		o=1;
	else
		o=0;
	return(o);
}
int p(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
			break;
	}
	if(i==n)
		return(1);
	else
		return(0);
}
void main()
{
	int i,m,n,t=0;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(k(i)==1&&p(i)==1)
		{
			t++;
			if(t==1)
			printf("%d",i);
			else
				printf(",%d",i);
		}
	}
	if(t==0)
		printf("no");
}


