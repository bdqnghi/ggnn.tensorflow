void main()
{
	int min,max,x,n,i,s;
	scanf("%d",&n);
	scanf("%d",&x);
	s=max=min=x;
	for(i=1;i<n;i++)
	{
		scanf("%d",&x);
		if(min>x) min=x;
		if(max<x) max=x;
		s=s+x;
	}
	if((n*max-s)>(s-n*min)) printf("%d",max);
	if((n*max-s)<(s-n*min)) printf("%d",min);
	if((n*max-s)==(s-n*min)) printf("%d,%d",min,max);
}