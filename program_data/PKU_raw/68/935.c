
int sushu(int p)
{
	int i;
	int k=0;
	for (i=2;i<=sqrt(p);i++)
		if (p%i==0)
			k++;
	if (k>0)
		return 0;
	else
		return 1;
}
int main()
{
	int n,m;
	scanf ("%d",&m);
	int a,b,p,q;
	n=6;
	while (n<=m)
	{
		for (a=2;a<=n/2;a++)
		{
			b=n-a;
			if (a!=2)
				p=a%2;
			else
				p=1;
			q=b%2;
			if (p&&q)
			{
				if (sushu(a)&&sushu(b))
				{
					printf ("%d=%d+%d\n",n,a,b);
					break;
				}
			}
		}
		n=n+2;
	}
	return 0;
}