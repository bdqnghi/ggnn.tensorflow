void joseph(int n,int m)
{
	int i,a[301],k=0,num=0;
	for(i=1;i<=n;i++) a[i]=1;
	i=1;
	while(num<n-1)
	{
		if(a[i]==1)
		{
			k++;
			if(k==m)
			{a[i]=0;num++;k=0;}
		}
	    if(i==n) i=1;
		else i++;
	}
	for(i=1;i<=n;i++)
		if(a[i]==1) printf("%d\n",i);
}
void main()
{
	int n[20],m[20],i,num;
	for(i=0;i<20;i++)
	{n[i]=1;m[i]=1;}
	i=-1;
	while(m[i]!=0&&n[i]!=0)
	{
		i++;
		scanf("%d%d",&n[i],&m[i]);
	
	}
	num=i;
	for(i=0;i<num;i++) joseph(n[i],m[i]);
	
}
