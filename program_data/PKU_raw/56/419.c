int main(int argc, char* argv[])
{
	int n;
	int a,b,c,d,e;
	scanf("%d",&n);
	if(n<10)
		printf("%d\n",n);
	if(10<n&&n<100)
	{
		a=n/10;
		b=n-10*a;
		printf("%d\n",10*b+a);
	}
	if(100<n&&n<1000)
	{
		a=n/100;
		b=(n-a*100)/10;
		c=n-a*100-b*10;
		printf("%d\n",100*c+10*b+a);
	}
	if(1000<n&&n<10000)
	{
		a=n/1000;
		b=(n-a*1000)/100;
		c=(n-a*1000-b*100)/10;
		d=n-a*1000-b*100-c*10;
		printf("%d\n",1000*d+100*c+10*b+a);
	}
	if(10000<n&&n<100000)
	{
		a=n/10000;
		b=(n-a*10000)/1000;
		c=(n-a*10000-b*1000)/100;
		d=(n-a*10000-b*1000-c*100)/10;
		e=n-a*10000-b*1000-c*100-d*10;
		printf("%d\n",10000*e+1000*d+100*c+10*b+a);
	}
	return 0;
}
