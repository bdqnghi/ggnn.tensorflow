int main(int argc, char* argv[])
{//5
	int n,a,b,c,d,e,m;
	scanf("%d",&n);
	a=n/10000;
	if(a!=0)
	{
		b=(n-10000*a)/1000;
		c=(n-10000*a-1000*b)/100;
		d=(n-10000*a-1000*b-100*c)/10;
		e=n-10000*a-1000*b-100*c-10*d;
		m=e*10000+d*1000+c*100+b*10+a;
		printf("%d\n",m);
	}

	b=n/1000;
    if(a==0&&b!=0)
	{
		c=(n-1000*b)/100;
		d=(n-1000*b-100*c)/10;
		e=n-1000*b-100*c-10*d;
		m=e*1000+d*100+c*10+b;
		printf("%d\n",m);
	}
	else
    c=n/100;

	if(a==0&&b==0&&c!=0)
	{
		d=(n-100*c)/10;
		e=n-100*c-10*d;
		m=e*100+d*10+c;
		printf("%d\n",m);
	}
	
	else
	d=n/10;

	if(a==0&&b==0&&c==0&&d!=0)
	{
		e=n-10*d;
		m=e*10+d;
		printf("%d\n",m);
	}
    if(a==0&&b==0&&c==0&&d==0)
		printf("%d\n",n);
	return 0;
}

