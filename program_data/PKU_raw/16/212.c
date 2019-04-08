int main ()
{
	int n,a,b,c,d;
	scanf("%d",&n);
	a=n/1000;
	b=(n%1000)/100;
	c=(n%100)/10;
    d=n%10;
	if (n<10) printf("%d",d);
	else if(n<100) printf("%d%d",d,c);
	else if(n<1000) printf("%d%d%d",d,c,b);
	else if(n<10000) printf("%d%d%d%d",d,c,b,a);
	return 0;
}