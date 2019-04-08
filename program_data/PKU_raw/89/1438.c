int main()
{
	int n,a,b,m=0,s=0,t,i=0,c[10000],d[10000];
	scanf("%d",&n);
	for(a=0;a<n;a++)
	{
		c[a]=0;
		d[a]=0;
	}
	scanf("%d%d",&a,&b);
	while(a!=0||b!=0)
	{
		c[a]++;
		d[b]++;
		scanf("%d%d",&a,&b);
	}
	for(s=0;s<n;s++)
	{
		if(c[s]==0&&d[s]==n-1){printf("%d",s);i=1;break;}
	}
	if(i==0)printf("NOT FOUND");
	return 0;
}