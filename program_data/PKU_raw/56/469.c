
int main(int argc, char* argv[])
{
	int n, a, b, c, d, f, x;
	scanf("%d", &n);
	a=(int)n/10000;
	b=(int)(n-10000*a)/1000;
	c=(int)(n-10000*a-1000*b)/100;
	d=(int)(n-10000*a-1000*b-100*c)/10;
	f=(int)(n-10000*a-1000*b-100*c-d*10)/1;
	if(a!=0)
	{x=f*10000+d*1000+c*100+b*10+a;}
    else {
		if(b!=0)
		{x=f*1000+d*100+c*10+b;}
	else{
		if(c!=0)
		{x=f*100+d*10+c;}
    else{
		if(d!=0)
		{x=f*10+d;}
	     else
		 {x=f;}
	}
	}
	}
	printf("%d\n", x);
	return 0;
}

