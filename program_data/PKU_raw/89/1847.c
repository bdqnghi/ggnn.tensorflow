
main()
{
	int n=0,c=0,flag=0;
	int x[80000],y[80000],z[80000];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		z[i]=1;
	}
	for(int i=0;;i++)
	{
		scanf("%d %d",&x[i],&y[i]);
		if(0==x[i] && 0==y[i])
		{
			c=i;
			break;
	    }	
	}
	for(int i=0;i<c;i++)
	{
		z[x[i]]=z[x[i]]-1;
		z[y[i]]=z[y[i]]+1;
	}
	for(int i=0;i<n;i++)
	{
		if(z[i]==n)
		{
			printf("%d",i);
			flag=1;
		}
	}
	if(flag==0)
	printf("NOT FOUND");
//printf("0");
} 