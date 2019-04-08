int main(int argc, char* argv[])
{
    int n, a, b, c, d, e, f;
	scanf("%d",&n);
	a=(int)(n/100);
	n-=a*100;
	b=(int)(n/50);
	n-=b*50;
	c=(int)(n/20);
	n-=c*20;
	d=(int)(n/10);
	n-=d*10;
	e=(int)(n/5);
	n-=e*5;
	f=n;
	printf("%d\n%d\n%d\n%d\n%d\n%d",a, b, c, d, e, f);
	return 0;
}