main()
{
	int m,n,h[301],i,k,num,leave,last;
	do
	{
	scanf("%d%d",&n,&m);
	for(i=0;i<=n;i++) h[i]=1;
	num=0;
	k=0;
	leave=n;
	do
	{
		if(h[num]==1)
		if(k!=m)
		{
			k++;
		}
		else
		{
			k=1;
			h[num]=0;
			leave--;
			last=num;
		}
		if(num!=n) num++;
		else num=1;
	}while(leave>0);
	if(last>0) printf("%d\n",last);
	}while(last>0);
	return(0);
}