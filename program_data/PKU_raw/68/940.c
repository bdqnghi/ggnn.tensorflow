int f(int a)
{
	int i,e;
	if(a%2==0)
		return 0;
	e=(int)sqrt(a);
	for(i=3;i<=e;i+=2)
		if(a%i==0)
			return 0;
	return 1;
}
void main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=6;i<=n;i+=2)
		for(j=2;j<=i/2;j++)
			if(f(j) && f(i-j))
			{
				printf("%d=%d+%d\n",i,j,i-j);
				break;
			}
}