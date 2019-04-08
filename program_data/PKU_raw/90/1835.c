
int num(int m,int n,int sum)
{
	if (m==1 || n==1)
	{
		sum++;
		return sum;
	}
	if (m<n)
		sum=num(m,n-1,sum);
	else if (m==n)
		sum=1+num(m,n-1,sum);
	if (m>n)
	{
		sum=num(m,n-1,sum);
		sum=num(m-n,n,sum);
	}
	return sum;
}

void main()
{
	int i,t,m,n,sum=0;
	scanf ("%d",&t);
	for (i=0;i<t;i++)
	{
		sum=0;
		scanf ("%d %d",&m,&n);
		sum=num(m,n,sum);
		printf ("%d\n",sum);
	}
}