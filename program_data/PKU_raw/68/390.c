main()
{
	int n,k,A,B,a,b,p,q;
	scanf("%d",&n);
	for(k=6;k<=n;k=k+2)
	{
		for(A=3;A<=k/2;A=A+2)
		{
			for(a=3;a<=sqrt(A);a=a+2)
				if(A%a==0)break;
				if(a>sqrt(A)) B=k-A;
				for(b=3;b<=sqrt(B);b=b+2)
					if(B%b==0)break;
					if(b>sqrt(B))
					{
						p=A;
						q=B;
						printf("%d=%d+%d\n",k,p,q);
						break;
					}
		}
	}
}
