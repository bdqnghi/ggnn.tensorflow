void main() 
{
	int n,a,b,c,d,e;
	scanf("%d",&n);
	a=n%10;n=n/10;
	b=n%10;n=n/10;
	c=n%10;n=n/10;
	d=n%10;n=n/10;
	e=n%10;n=10000*a+1000*b+100*c+10*d+e;
	if(n%10==0) n=n/10;
	if(n%10==0) n=n/10;
	if(n%10==0) n=n/10;
	if(n%10==0) n=n/10;
	printf("%d\n",n);
}
