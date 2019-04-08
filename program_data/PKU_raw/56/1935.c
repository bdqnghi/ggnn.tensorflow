int main()
{
	long int x,y,a,b,c,d,e;
	scanf("%d",&x);
	a=x/10000;
	b=(x-10000*a)/1000;
	c=(x-10000*a-1000*b)/100;
	d=(x-10000*a-1000*b-100*c)/10;
	e=(x-10000*a-1000*b-100*c-10*d);
	if(x<10)
		y=e;
	else if(x>=10&&x<100)
		y=10*e+d;
	else if(x>=100&&x<1000)
		y=100*e+10*d+c;
	else if(x>=1000&&x<10000)
		y=1000*e+100*d+10*c+b;
	else if(x>=10000&&x<100000)
		y=10000*e+1000*d+100*c+10*b+a;
	printf("%ld\n",y);
}