int x(int a,int b);
main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",x(a,b));
}
int x(int a,int b)
{
	if(a>b)
	{a=a/2;
	return x(a,b);}
    if(a<b)
	{b=b/2;
	return x(a,b);}
	if(a=b)
	return a;
}