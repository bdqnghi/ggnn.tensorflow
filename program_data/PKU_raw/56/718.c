void main()
{
	int a,b,c,d,e,m,n;
	scanf("%d",&m);
	if(m<=0)
		printf("please inpue an int >0");
	else if(m<=9)
		printf("%d\n",m);
	else if(m<=99)
	{d=m/10;e=m-10*d;
      n=10*e+d;
	  
	}
	else if(m<=999)
	{c=m/100;d=m/10-10*c;e=m-100*c-10*d;
	n=100*e+10*d+c;
	}
	else if(m<=9999)
	{b=m/1000;c=m/100-10*b;
	d=m/10-100*b-10*c;
	e=m-1000*b-100*c-10*d;
	n=1000*e+100*d+10*c+b;
	}
	else if(m<=99999)
	{a=m/10000;b=m/1000-10*a;
	c=m/100-100*a-10*b;d=m/10-1000*a-100*b-10*c;
	e=m-10000*a-1000*b-100*c-10*d;
	n=10000*e+1000*d+100*c+10*b+a;
	}
	printf("%d\n",n);
}