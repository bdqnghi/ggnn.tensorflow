int main()
{
	int n,i,m,k,leap=0,x=0;
	int a[30000];
	scanf("%d",&n);
	if(n<=4)
	{	printf("empty\n");
	    leap=1;
	}
	k=0;
	if(leap==0)
	{
    for(m=3;m<=n;m=m+2)
	{
		for(i=2;i<m;i++)
		{
			if(m%i==0)
				break;
			if(i==m-1)
			{	a[k]=m;
			     k++;
				break;
			}
		}
	}
	for(i=0;i<=k;i++)
	{
		if(a[i]==a[i+1]-2)
		{	printf("%d %d\n",a[i],a[i+1]);
	     	x=1;
		}
		    
	}
	}
	if(x==0&&leap==0)
		printf("empty\n");
	return 0;
}

