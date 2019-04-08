void main()
{
	int m,n,t,p,q,i;
	int k,sum;
	int b,c,d,e,u;

	int a[10000]={0};
	int s[10000]={0};
	int prime[10000]={0};

	scanf("%d %d",&m,&n);
	q=0;
	sum=0;
	for(i=m;i<=n;i++)   /*?????????? ??????*/
	{
		k=(int)sqrt(i);
		for(t=2;t<=k;t++)
			if(i%t==0)
				break;
		if(t>k)
		{ 
			a[q]=i;           /*a[q]??????????*/
			q=q+1;
		}
	}

	for(i=0;i<q;i++)         /*?a[i]???????,??s[i]??*/
	{
		p=a[i];
		sum=0;
		do
		{
			e=p%10;
			p=p/10;
			sum=sum*10+e;
		}while(p!=0);
		s[i]=sum;
	}
	
	u=0;
	for(i=0;i<q;i++)      /*??????????????? ???prime[i]*/
	{
		if(a[i]==s[i])
		{
			prime[u]=a[i];
			u=u+1;
		}
	}
	if(u==0)                  /*??????????no*/
		printf("no\n");
	else
	{
		for(i=0;i<u-1;i++)          /*???????*/
			printf("%d,",prime[i]);
		printf("%d\n",prime[u-1]);
	}
}