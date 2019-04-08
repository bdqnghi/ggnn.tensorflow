void main()
{
	int disorder(int n);
	int a[6],i,b[6];
	for(i=0;i<6;i++)
	{scanf("%d",&a[i]);
	b[i]=disorder(a[i]);}
	for(i=0;i<6;i++)
	{printf("%d\n",b[i]);}
}

int disorder(int n)
{
	int a,c;
    if(n>0)
	{a=n;c=0;
	while(a>0)
	{
	c=c*10+a%10;
    a/=10;}
	return c;}

	if(n<0)
	{a=-n;c=0;
	while(a>0)
	{
	c=c*10+a%10;
    a/=10;}
	return -c;}
	if(n==0)
	{return 0;}
}