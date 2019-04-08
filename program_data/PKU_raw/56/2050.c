int main()
{
	int n,i,a,b=0;
	scanf("%d",&n);
	for(i=0;i<=4;i++)
	{
		a=n%10;
		n=n/10;
		
		b=10*b+a;
		if(n==0)
			break;
	}
	printf("%d\n",b);
	return 0;
}