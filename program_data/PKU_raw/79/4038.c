int main()
{
	int i,m,n,t,s,a[301];
	for(;;)
	{   scanf("%d %d",&n,&m);
	    if(n==0||m==0)break;
	    for(i=1;i<=n;i++)a[i]=0;
		t=n;s=0;
		for(i=0;t>0;)
			{i++;if(i==n+1)i=1;
			if(a[i]==0)
			{s=s+1;
			if(s%m==0)
			{a[i]=-1;t=t-1;}}}
		printf("%d\n",i);}}
