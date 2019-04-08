
int main()
{
	int a,b,i,k,n,t;
	scanf("%d",&a);
	n=1;
	for(t=1;t<=a;t++)
	{k=a/10;
	if(k>0)
		n=n+1;}
	for(i=1;i<=n;i++)
	{
	b=a%10;
	a=a/10;
	if(b!=0)
	printf("%d",b);}
	return 0;
}

