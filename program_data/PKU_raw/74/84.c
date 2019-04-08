void main()
{ 
	int m,n,i,j,p,t,rev,s,f=0,g=0;
	int su,hui;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		su=1;hui=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				su=0;
				break;
			}
		}
		t=1;
		while(t<i)
		{
			t=t*10;
		}
		t=t/10;
		p=i;s=1;rev=0;
		while(t!=1)
		{
			rev=rev+(p/t)*s;
			p=p%t;
			t=t/10;
			s=s*10;
		}
		rev=rev+p*s;
		if(rev==i)
			hui=1;		
		if(su==1&&hui==1)
		{
			if(f==0)
			{
				printf("%d",i);
				f=1;g=1;
			}
			else
			printf(",%d",i);
		}
	}
	if(g==0)
		printf("no");
	printf("\n");
}