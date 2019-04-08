int main()
{
	int n,i,j,k,x;
	int s=0,l=0;
	int a[num],d[num];
	scanf("%d",&n);
	for(i=1;i<=10000;i++)
		a[i]=0;
	for(i=1;i<=n;i++)
	{
		scanf("%d%d",&j,&k);
		for(x=j;x<k;x++)
			a[x]++;
	}
	for(i=1;i<=10000;i++)
	{
		if(a[i]!=0)
		{
			d[s]=i;
			s++;
		}
	}
	for(i=0;i<s-1;i++)
	{
		if(d[i+1]-d[i]!=1) l++;
	}
	if(l==0) printf("%d %d",d[0],d[s-1]+1);
	else printf("no");
	return 0;
}