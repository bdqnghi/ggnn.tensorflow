int main()
{
	int a,b,c,d,e,n;
	scanf("%d",&n);
	a=(int)(n/10000);
	b=(int)((n-a*10000)/1000);
	c=(int)((n-a*10000-b*1000)/100);
	d=(int)((n-a*10000-b*1000-c*100)/10);
	e=(int)(n-a*10000-b*1000-c*100-d*10);
	if(a!=0)
	printf("%d%d%d%d%d",e,d,c,b,a);
	else if(b!=0)
	printf("%d%d%d%d",e,d,c,b);
	else if(c!=0)
	printf("%d%d%d",e,d,c);
	else if(d!=0)
	printf("%d%d",e,d);
	else 
	printf("%d",e);
	return 0;
}