int main()
{
	int m,n,i,j,a,b;
	scanf("%d",&m);
	for(n=6;n<=m;n+=2)
	{
		for(a=3;a<=n/2;a+=2)
	    {
		for(i=3;i<=sqrt((float)a);i+=2)
			if(a%i==0)break;
		if(i<=sqrt((float)a))continue;
		else
			for(j=3,b=n-a;j<=sqrt((float)b);j+=2)
				if(b%j==0)break;
		if(j<=sqrt((float)b))continue;
		else break;
	    }
	    printf("%d=%d+%d\n",n,a,b);
	}
}