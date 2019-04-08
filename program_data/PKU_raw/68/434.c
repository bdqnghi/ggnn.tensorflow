int main()
{
	int prime(int a);
	int i,n,a;
	scanf("%d",&i);
	n=6;
	while(n<=i)
	{
	a=3;
	while(a<=n/2)
	{
		if(prime(a)==0&&prime(n-a)==0)
		{
		printf("%d=%d+%d\n",n,a,n-a);
	    break;
		}
	    else
		a+=2;
	}
	n+=2;
	}
    return 0;
}	
int prime(int a)
	{
		int b,c;
		b=0;
		for(c=2;c<=sqrt(a);c++)
		{
			if (a%c==0)
			{
				b=1;break;
			}
		}
		return(b);
	}
	
