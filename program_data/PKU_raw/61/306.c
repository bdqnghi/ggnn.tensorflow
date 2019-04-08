int f(int n)
{
	int c;
	if (n==1||n==2)
		c=1;
	else c=f(n-1)+f(n-2);
	return (c);
}
void main()
{
	int i,m,n,*p;
	p=(int *)malloc(20*sizeof(int));
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",p+i);
	for(i=0;i<n;i++)
	{m=f(*(p+i));
	printf("%d\n",m);
	}
}