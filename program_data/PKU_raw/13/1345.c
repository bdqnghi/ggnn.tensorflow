int main()
{
	int n,a,b;
	int z[30000];
	int c[30000];
	int x[101];
	scanf("%d",&n);
	for(a=10;a<=100;a++)
	{
		x[a]=1;
	}
	for(a=1;a<=n;a++)
	{
		scanf("%d",&z[a]);
	}
	b=1;
	for(a=1;a<=n;a++)
	{
		if(x[z[a]]==1)
		{
			c[b]=z[a];
			b+=1;
		    x[z[a]]=0;
		}
	}
    for(a=1;a<=b-1;a++)
	{
		if (a<b-1)
			printf("%d ",c[a]);
		else
			printf("%d",c[a]);
	}
	return 0;
} 