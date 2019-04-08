int main(int argc, char* argv[])
{
	int n,a,b,c,d,e;
	scanf("%d",&n);
	a=n/10000;
	b=n/1000-10*a;
	c=n/100-10*b-100*a;
	d=n/10-10*c-100*b-1000*a;
	e=n-10*d-100*c-1000*b-10000*a;
	if(n>=10000)
		printf("%d%d%d%d%d",e,d,c,b,a);
	else if((n>=1000)&&(n<10000))
		printf("%d%d%d%d",e,d,c,b);
	else if((n>=100)&&(n<1000))
		printf("%d%d%d",e,d,c);
	else if((n>=10)&&(n<100))
		printf("%d%d",e,d);
	else if((n>=1)&&(n<10))
		printf("%d",e);
	return 0;
}
