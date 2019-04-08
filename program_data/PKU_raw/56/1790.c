int main()
{
	int a,b,c,d,e,f,g,h,i,j,k,l,m,o,p,n;
	scanf("%d",&n);
	if(n>=10000)
	{
		a=n/10000;
		b=(n-a*10000)/1000;
		c=(n-a*10000-b*1000)/100;
		d=(n-a*10000-b*1000-c*100)/10;
		e=n-a*10000-b*1000-c*100-d*10;
	    printf("%d%d%d%d%d",e,d,c,b,a);
	}
	else if(n>=1000&&n<=10000)
	{
		f=n/1000;
	    g=(n-f*1000)/100;
	    h=(n-f*1000-g*100)/10;
	    i=n-f*1000-g*100-h*10;
	    printf("%d%d%d%d",i,h,g,f);
	}
	else if(n>=100&&n<=1000)
	{
		j=n/100;
	    k=(n-j*100)/10;
	    l=n-j*100-k*10;
	    printf("%d%d%d",l,k,j);
	}
	else if(n>=10&&n<=100)
	{
		m=n/10;
	    o=n-m*10;
	    printf("%d%d",o,m);
	}
    else if(n>=0&&n<=10)
	{
		p=n;
	    printf("%d",n);
	}
}