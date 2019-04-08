int main()
{
	int a,b,n,k,i,j,t;
	scanf("%d",&n);
	t=0;
	for(a=2;a<=n;a++)
	{
	k=sqrt(a);
	for(i=2;i<=k;i++)
		if(a%i==0)break;
		if(a%i==0)continue;
	if(i>=k+1)
		b=a+2;
	if (b<=n)
	{
		k=sqrt(b);
	for(j=2;j<=k;j++)
	if(b%j==0)break;
	if(j>=k+1)
	{printf("%d %d\n",a,b);
	t=t+1;
	}
	}
	}
	if(t==0)
		printf("empty\n");
return 0;
}
