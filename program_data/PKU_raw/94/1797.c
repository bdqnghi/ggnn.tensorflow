int main()
{
	int maxlndex,e,i,k,n,t=0;
	int sz[500];
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&sz[i]);
	}
    for(k=1;k<n+1; k++){
	maxlndex=0;
	for(i=0;i<n-k+1;i++)
	{
        if(sz[i]>sz[maxlndex])
		{
			maxlndex=i;
		}
	}

	if(maxlndex!=n-k)
	{
		e=sz[maxlndex];
		sz[maxlndex]=sz[n-k];
		sz[n-k]=e;
	}
	}
	for(i=0;i<n;i++)
	{
		if(sz[i]%2!=0)
		{
			t=i;
		}
	}
	for(i=0;i<n;i++)
	{
		if(sz[i]%2!=0)
		{if(i!=t)
		{printf("%d,",sz[i]);
		}else		{
			printf("%d",sz[i]);
		}
		}
	}
	return 0;
}