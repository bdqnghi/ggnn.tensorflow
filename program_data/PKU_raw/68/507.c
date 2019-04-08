int evennumber(int x)
{
	int i;
	for(i=2;i<=sqrt(x);i=i+1)
	{
		if(x%i==0)
		{
			return(0);
			break;
		}
	}
	if(i>sqrt(x))
		return(1);
}
void main()
{
	int n=6,m,k,o,p,e=2;
	scanf("%d",&m);
	for(n=6;n<=m;n=n+2)
	{
        
		for(e=3;e<n;e=e+2)
		{
			k=n-e;
			o=evennumber(k);
			p=evennumber(e);
			if(o==1&&p==1)
				break;
			else
				continue;
		}
		printf("%d=%d+%d\n",n,e,k);
	}
}