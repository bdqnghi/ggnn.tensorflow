int main()
{
	int a,b,c[100],d,e;
	scanf("%d",&a);
	for(b=0;b<a;b++)scanf("%d",&c[b]);
	d=c[0];
	for(b=0;b<a-1;b++)
	{
		if(d>=c[b+1])d=d;
		else d=c[b+1];
	}
	e=c[0];
	for(b=0;b<a-1;b++)
	{
		if(e>=c[b+1]||c[b+1]==d)e=e;
		else e=c[b+1];
	}
	printf("%d\n%d",d,e);
}
