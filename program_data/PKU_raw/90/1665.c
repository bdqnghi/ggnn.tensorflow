int pf(int m,int n)
{
	int c,i=0;
	if (m==0||n==1)
	    c=1;
	else if (m<n)
		c=pf(m,(n-1));
	else
		c=pf(m,(n-1))+pf((m-n),n);
	return c;
}
int main ()
{
	int a,m,n;
	scanf("%d",&a);
	for (int i=1;i<=a;i++)
	{
		scanf("%d %d",&m,&n);
		printf("%d\n",pf(m,n));
	}
	return 0;
}