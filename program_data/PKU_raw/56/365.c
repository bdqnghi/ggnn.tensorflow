
int main(int argc, char* argv[])
{
	int n;
	int a,b,c,d,e,f;
	scanf("%d",&n);
	a=n%10;
	b=(n%100-a)/10;
	c=(n%1000-n%100)/100;
	d=(n%10000-n%1000)/1000;
	e=(n-n%10000)/10000;
	if(n/10==0)
	{
		f=a;
	}
	else if(n/100==0)
	{
		f=10*a+b;
	}
else	if(n/1000==0)
	{
		f=100*a+10*b+c;
	}
	else if(n/10000==0)
	{
		f=1000*a+100*b+10*c+d;
	}
	else if(n/100000==0)
	{
		f=10000*a+1000*b+100*c+10*d+e;
	}

	printf("%d\n",f);
	return 0;
}

