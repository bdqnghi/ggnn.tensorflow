int main()
{
	int a,b,c,d,e,f,g,h,i,j,k;
	scanf("%d",&a);
	b=(int)(a/100);
	c=a%100;
	d=(int)(c/50);
	e=c%50;
	f=(int)(e/20);
	g=e%20;
	h=(int)(g/10);
	i=g%10;
	j=(int)(i/5);
	k=i%5;
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",b,d,f,h,j,k);
	return 0;
}