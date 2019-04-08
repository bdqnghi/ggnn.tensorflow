int a(int n)
{
	int k,i,a=1;
	k=(int)sqrt(n);
	for (i=2;i<=k;i++)
		if (n%i==0) a=0;
	return(a);
}
int b(int n)
{
	int i,j,b=1,m1,m2;
	j=log10(n);
	for (i=0;i<=j;i++)
	{
		m1=n;m2=n;
		m1=m1/pow(10,i);
		m2=m2/pow(10,j-i);
		if ((m1-m1/10*10)!=(m2-m2/10*10)) b=0;
	}
	return(b);
}
void main()
{
	int m,n,i,j,sum=0,ans[10000];
	scanf("%d %d",&m,&n);
	for (i=m;i<=n;i++)
		if (a(i)&&b(i)) ans[++sum]=i;
	if (sum==0) printf("no\n");
	else 
	{
		for (i=1;i<sum;i++) printf("%d,",ans[i]);
		printf("%d\n",ans[sum]);
	}
}