void main()
{
	int n,k;
	scanf("%d",&n);
	k=4;
    A:k=k+2;
	while(k<=n)
	{
        int a,b;
		a=1;
        loop:a=a+2;
		int i,x;
		x=sqrt(a);
		i=(x/2)*2+1;
		while(a%i!=0)
			i=i-2;
		if(i!=1)
			goto loop;
		else
		{
			b=k-a;
			int j,y;
			y=sqrt(b);
			j=(y/2)*2+1;
			while(b%j!=0)
				j=j-2;
			if(j!=1)
				goto loop;
			else
				printf("%d=%d+%d\n",k,a,b);
			    goto A;
		}
	}
}