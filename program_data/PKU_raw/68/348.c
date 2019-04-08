int IsPrime(int m)
{
	int k,i;
	k=sqrt(m);
	if(m==2) return 1;
	if(m%2!=0)
	{
		for(i=3;i<=k;i=i+2)
		   if(m%i==0)
			 break;
	    if(i==k+2||i==k+1)
		     return 1;
	    else return 0;
	}
}

void f(int n)
{
	int p,q,i;
	if(p==2&&IsPrime(n-2)==1) 
		printf("%d=2+%d\n",n,n-2);
	for(i=3;i<=n/2;i++)
	{
		p=i;
		q=n-p;
		if(IsPrime(p)==1&&IsPrime(q)==1){
			printf("%d=%d+%d\n",n,p,q);
			break;
		}
	}
}

void main()
{
	int n,i;
	scanf("%d",&n);
	i=6;
	while(i<=n)
	{
		f(i);
		i=i+2;
	};
}