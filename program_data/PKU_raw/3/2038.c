int main()
{
	int n,k,a,b,c;
	int z[1000];
	scanf("%d",&n);
	scanf("%d",&k);
	c=0;
	for(a=0;a<=n-1;a++)
	{
		scanf("%d",&z[a]);
	}
    for(a=0;a<=n-1;a++)
	{
		for(b=0;b<=n-1;b++)
		{
			if (z[a]+z[b]==k) c=1;
		}
	}
	if (c==1) printf("yes");
	else printf("no");
	return 0;
}

