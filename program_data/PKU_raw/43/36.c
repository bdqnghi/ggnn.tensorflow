void main()
{
	int m,q,r,i,j,a,b;
	scanf("%d",&m);
	for (q=3;q<=m/2;q++)
	{r=m-q;
	 a=0;
	 b=0;
		for (i=2;i<=sqrt(q);i++)
			if(q%i==0) a=1;
		for (j=2;j<=sqrt(r);j++)
			if(r%j==0) b=1;
		if(a==0&&b==0) printf("%d %d\n",q,r);
		
	}

}