int main()
{
	int n,a,b,c,d;
scanf("%d",&n);
a=n%10;
n=n/10;
if(n==0)
{
	printf("%d",a);
}
else
{
	b=n%10;
	n=n/10;
	if(n==0)
{
	printf("%d%d",a,b);
}
else
{
	c=n%10;
n=n/10;
d=n;
if(n==0)
{
	printf("%d%d%d",a,b,c);
}
else
{
printf("%d%d%d%d",a,b,c,d);
}
}
}
return 0;
}