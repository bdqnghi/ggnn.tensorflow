struct Interval
{
	int sta;
	int end;
};
int maximum(int a,int b,int c)
{
	if(a>=b&&a>=c) return a;
	if(b>=a&&b>=c) return b;
	if(c>=a&&c>=b) return c;
}
int compare(const void *a,const void *b)
{
	return ((struct Interval *)a)->sta-((struct Interval*)b)->sta;
}
main()
{
	struct Interval a[50000];
	int i,j=0,n,end=0,max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d %d",&a[i].sta,&a[i].end);
	qsort(a,n,sizeof(struct Interval),compare);
	for(i=0;i<n-1;i++)
	{
		max=maximum(max,max,a[i].end);
		if(max>=a[i+1].sta)
		{
			j++;
			end=maximum(end,a[i].end,a[i+1].end);
		}
		else break;
	}
	if(j==n-1)
		printf("%d %d\n",a[0].sta,end);
	else printf("no");
}