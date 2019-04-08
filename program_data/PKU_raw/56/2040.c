void main()
{
	int m,n,a,b,c,d,e;
	scanf("%d",&m);
	if(m%10==m)
	{
		n=m;
        printf("%d\n",n);
	}
	else if(m%100==m)
	{
		a=m/10;
		b=m-10*a;
		n=10*b+a;
        printf("%d\n",n);
	}
	else if(m%1000==m)
	{
		a=m/100;
		b=(m-100*a)/10;
		c=m-100*a-10*b;
		n=100*c+10*b+a;
        printf("%d\n",n);
	}
	else if(m%10000==m)
	{
		a=m/1000;
	    b=(m-1000*a)/100;
		c=(m-1000*a-100*b)/10;
		d=m-1000*a-100*b-10*c-d;
		n=1000*d+100*c+10*b+a;
        printf("%d\n",n);
	}
	else if(m%100000==m)
	{
		a=m/10000;
		b=(m-10000*a)/1000;
		c=(m-10000*a-1000*b)/100;
		d=(m-10000*a-1000*b-100*c)/10;
		e=m-10000*a-1000*b-100*c-10*d;
		n=10000*e+1000*d+100*c+10*b+a;
		printf("%d\n",n);
	}
}