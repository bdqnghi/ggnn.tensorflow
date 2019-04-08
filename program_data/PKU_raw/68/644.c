int panduan(long int n)
{
	long int i;
	if(n==1) return 0;
	else 
	{
		for(i=2;i<=sqrt(n);i++)
			if(n%i==0) break;
		if(i<=sqrt(n)) return 0;
		else return 1;
	}
}
void main()
{
	long int n,x,i;
	scanf("%d",&n);
	for(i=6;i<=n;i=i+2)
	{
		for(x=3;x<=n/2;x=x+2)
		{
			if(panduan(x))
				if(panduan(i-x))
				{printf("%d=%d+%d\n",i,x,i-x);break;}
		}

	}
}