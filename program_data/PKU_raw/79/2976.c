int main()
{	
	for(;;)
	{
	int m,n,i,j,k,t=0;
	scanf("%d%d",&n,&m);
	if(n==0)break;
	int a[n];
	for(i=0;i<n;i++)
	a[i]=0;
	for(i=1;t<n-1;)
	{
		for(j=0;j<m;)
		{
		if(a[i-1]==0)j++;
		i++;
		if(i>n)i%=n;
		}
		t++;
		if(i!=1)a[i-2]=1;
		else a[n-1]=1;	
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==0)printf("%d\n",i+1);
	}
	}
}