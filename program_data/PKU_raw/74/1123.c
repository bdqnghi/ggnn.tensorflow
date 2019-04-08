int huiwen(int m)
{
	int n=0,s,a;
	a=m;
	for(;m>0;)
	{
		s=m%10;
		m=m/10;
		n=n*10+s;
	}
	if(n==a)
		return(1);
	else
		return(0);
}
int sushu(int m)
{
	int i;
	if(m%2==0)
		return(0);
	else
	{
		for(i=3;i<m/2&&m%i!=0;i=i+2);
        if(m%i!=0)
			return(1);
		else
			return(0);
	}
}

void main()
{
	int m,n,o=0;
	scanf("%d %d",&m,&n);
	for(;m<=n;m++)
        if(huiwen(m)&&sushu(m))
		{
			if(o!=0)
			{
			 printf(",");
		
			}
					o++;
		printf("%d",m);
		}
		if(o==0)
			printf("no");

}
