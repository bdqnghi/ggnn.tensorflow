main()
{
	int m,n,i,j,k,t,r=0;
	scanf("%d%d",&m,&n);
	if(m%2==0) m++;
	if(n%2==0) n++;
	for(i=m;i<=n;i=i+2)
	{
		for(j=i,t=0;j>0;)
		{t=t*10+j%10;j=j/10;}
		if(t==i)
		{	
			for(k=3;k<t;k=k+2)
				if(t%k==0) break;
			if(k==t) r++;
			if(k==t&&r==1) printf("%d",t);
			if(k==t&&r>1) printf(",%d",t);
		}
	}
	if(r==0)
		printf("no");
}
