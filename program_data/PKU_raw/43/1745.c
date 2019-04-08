void main()
{
	int n,i,q,s,k;
	scanf("%d",&n);
	k=sqrt(n-3);
	for(i=2;i<=k;i++)
		if((n-3)%i==0)break;
	if(i>k)printf("3 %d\n",n-3);
	for(q=5;q<=(n/2);q++)
	{
		k=sqrt(q);
		for(i=2;i<=k;i++)
			if(q%i==0)break;
		if(i>k)
		{
			s=sqrt(n-q);
			for(i=2;i<=s;i++)
				if((n-q)%i==0)break;
			if(i>s)printf("%d %d\n",q,n-q);
		}
	}
}





