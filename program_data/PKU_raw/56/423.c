int main()
{
	int a;
	int b,c,d;
	int e,f,g;
	int h,i,j,k;
	int l,m,n,o,p;
	scanf("%d",&a);
	if (a<10&&a>0)
	{
		b=a;
		printf("%d",a);
	}
	if (a<100&&a>9)
	{
		c=a/10;
		d=a-10*c;
		printf("%d%d",d,c);
	}
	if (a<1000&&a>99)
	{
		e=a/100;
		f=(a-100*e)/10;
		g=a-e*100-f*10;
		printf("%d%d%d",g,f,e);
	}
	if (a<10000&&a>999)
	{
		h=a/1000;
		i=(a-1000*h)/100;
		j=(a-h*1000-i*100)/10;
		k=a-h*1000-i*100-j*10;
		printf("%d%d%d%d",k,j,i,h);
	}

	if (a<100000&&a>9999)
	{
		l=a/10000;
		m=(a-10000*l)/1000;
		n=(a-l*10000-m*1000)/100;
		o=(a-l*10000-m*1000-n*100)/10;
		p=a-l*10000-m*1000-n*100-o*10;
		printf("%d%d%d%d%d",p,o,n,m,l);
	}

	
	return 0;
}

