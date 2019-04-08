int main()
{
	int m,a[1000]={0},b,c,d,e,i;
	scanf("%d",&m);
	i=1;a[0]=3;
	for(b=5;b<=15+m/2;b=b+2)
	{
		c=0;
		for(d=2;d<=sqrt(b);d++)
		{
			if(b%d==0) c++;
		}
		if(c==0)
		{
			a[i]=b;i++;
		}
	}
	b=i;
	for(e=0;a[e]<=m/2;e++)
	{
		i=m-a[e];c=0;
		for(d=2;d<=sqrt(i);d++)
		{
			if(i%d==0) c++;
		}
		if(c==0)
		{
			printf("%d %d\n",a[e],i);
		}
	}
	return 0;
}
