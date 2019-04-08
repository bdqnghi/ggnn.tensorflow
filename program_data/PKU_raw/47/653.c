


int main()
{
    int n;
	scanf("%d\n",&n);
	int sz[n];
	int i,x,y;
    for(i=0;i<n;i++)
	{
		scanf("%d",&sz[i]);
	}
    x=n-1;
	y=x/2;
	for(i=0;i<=y;i++)
	{   
		int e;
		
		e=sz[i];
		sz[i]=sz[n-i-1];
		sz[n-i-1]=e;
		
	}
	for(i=0;i<n;i++)
	{   if(i!=n-1)
	{printf("%d ",sz[i]);}
	else
	{
		printf("%d",sz[i]);
	}
	}
	return 0;
}


